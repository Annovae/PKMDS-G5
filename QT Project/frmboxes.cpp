/*
***********************************************
PKMDS Code Library - Gen V

Created by Michael Bond (aka Codemonkey85)
https://plus.google.com/116414067936940758871/

Feel free to use and reuse this code as you see fit, but I
implore you to always link back to me as the original creator.
***********************************************

Thanks to Alex "eevee" Munroe at http://veekun.com/
for his SQLite Pokedex database, which powers this software.

Thanks to the fine folks at SQLite.org for making it possible
to use the Pokedex database... the source files "sqlite3.c"
and "sqlite3.h" came from these people.

Thanks to those of Project Pokemon (http://projectpokemon.org/)
who have helped research and document the underlying structure
of Pokemon game save files.

Special thanks to SCV, Sabresite, loadingNOW, Poryhack,
GatorShark, Jiggy-Ninja, Codr, Bond697, mingot, Guested,
coolbho3000 and of course, COM.

Some documentation available at: http://www.projectpokemon.org/wiki/
*/
#include "frmboxes.h"
#include "ui_frmboxes.h"
#include "pkmviewer.h"
#include <QFileDialog>
frmBoxes::frmBoxes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::frmBoxes)
{
    ui->setupUi(this);
    ui->sbBoxIncrem->setVisible(false);
}
bw2sav_obj * sav = new bw2sav_obj;
QString SaveFileName = "";
bool SavDecrypted = false;
const QString wTitle = "PKMDS Qt Edition";
frmBoxes::~frmBoxes()
{
    try
    {
        closeimgdb();
        closedb();
    }
    catch(...){}
    bool isbw2 = savisbw2(sav);
    sav->cur.curbox = ui->cbBoxes->currentIndex();
    sav->cur.block1checksum = getchecksum(&(sav->cur),0x0,0x3e0);
    for(uint32 pslot = 0; pslot < sav->cur.party.size; pslot++)
    {
        encryptpkm(&(sav->cur.party.pokemon[pslot]));
    }
    calcpartychecksum(&(sav->cur));
    for(int boxnum = 0; boxnum < 24; boxnum++)
    {
        for(int boxslot = 0; boxslot < 30; boxslot++)
        {
            encryptpkm(&(sav->cur.boxes[boxnum].pokemon[boxslot]));
        }
        calcboxchecksum(&(sav->cur),boxnum,isbw2);
    }
    fixsavchecksum(sav);
    write(SaveFileName.toStdString().c_str(),sav);
    delete ui;
}
void frmBoxes::on_actionLoad_SAV_triggered()
{
    SaveFileName = QFileDialog::getOpenFileName(this,tr("Load a SAV file"),tr(""),tr("SAV Files (*.sav)"));
    if(SaveFileName != "")
        SavDecrypted = false;
    {
        opendb();
        openimgdb();
        read(SaveFileName.toStdString().c_str(),sav);
        this->setWindowTitle(wTitle + QString::fromStdString(" - ") + QString::fromStdWString(getwstring(sav->cur.trainername)));
        QGraphicsView * partygraphics[] = {
            ui->pbPartySlot1,
            ui->pbPartySlot2,
            ui->pbPartySlot3,
            ui->pbPartySlot4,
            ui->pbPartySlot5,
            ui->pbPartySlot6
        };
        QPixmap partypix[6];
        QGraphicsScene* partyscenes[6];
        for(int i = 0; i < 6; i++)
        {
            partypix[i] = QPixmap();
            partyscenes[i] = new QGraphicsScene();
            partyscenes[i]->addPixmap(partypix[i]);
            partygraphics[i]->setScene(partyscenes[i]);
        }
        for(uint32 pslot = 0; pslot < sav->cur.party.size; pslot++)
        {
            decryptpkm(&(sav->cur.party.pokemon[pslot]));
            partypix[pslot] = getpkmicon(sav->cur.party.pokemon[pslot].pkm_data);
            partyscenes[pslot] = new QGraphicsScene();
            partyscenes[pslot]->addPixmap(partypix[pslot]);
            partygraphics[pslot]->setScene(partyscenes[pslot]);
        }
        if(ui->cbBoxes->count() == 0)
        {
            for(int i = 0; i < 24; i++)
            {
                ui->cbBoxes->addItem("");
            }
        }
        for(int boxnum = 0; boxnum < 24; boxnum++)
        {
            ui->cbBoxes->setItemText(boxnum,QString::fromStdWString(getwstring(sav->cur.boxnames[boxnum])));
            for(int boxslot = 0; boxslot < 30; boxslot++)
            {
                decryptpkm(&(sav->cur.boxes[boxnum].pokemon[boxslot]));
            }
        }
        SavDecrypted = true;
        ui->sbBoxIncrem->setVisible(true);
        ui->sbBoxIncrem->setEnabled(true);
        ui->sbBoxIncrem->setValue(sav->cur.curbox);
        ui->cbBoxes->setEnabled(true);

//        pokemon_obj * apkm = new pokemon_obj;
//        apkm = &(sav->cur.party.pokemon[0].pkm_data);
        pkmviewer * pview = new pkmviewer(this);
        pview->setPKM(sav->cur.party.pokemon[0]);
        pview->displayPKM();
        pview->show();

    }
}
void frmBoxes::changebox(int index)
{
    int box = index;
    QGraphicsView* boxgraphics[30] = {
        ui->pbBoxSlot1,
        ui->pbBoxSlot2,
        ui->pbBoxSlot3,
        ui->pbBoxSlot4,
        ui->pbBoxSlot5,
        ui->pbBoxSlot6,
        ui->pbBoxSlot7,
        ui->pbBoxSlot8,
        ui->pbBoxSlot9,
        ui->pbBoxSlot10,
        ui->pbBoxSlot11,
        ui->pbBoxSlot12,
        ui->pbBoxSlot13,
        ui->pbBoxSlot14,
        ui->pbBoxSlot15,
        ui->pbBoxSlot16,
        ui->pbBoxSlot17,
        ui->pbBoxSlot18,
        ui->pbBoxSlot19,
        ui->pbBoxSlot20,
        ui->pbBoxSlot21,
        ui->pbBoxSlot22,
        ui->pbBoxSlot23,
        ui->pbBoxSlot24,
        ui->pbBoxSlot25,
        ui->pbBoxSlot26,
        ui->pbBoxSlot27,
        ui->pbBoxSlot28,
        ui->pbBoxSlot29,
        ui->pbBoxSlot30
    };
    QPixmap boxpix[30];
    QGraphicsScene* boxscenes[30];
    for(int bslot = 0; bslot < 30; bslot++)
    {
        if(sav->cur.boxes[box].pokemon[bslot].species != 0)
        {
            if(sav->cur.boxes[box].pokemon[bslot].species == Species::keldeo)
            {
                std::string stop = "stop";
            }
            boxpix[bslot] = getpkmicon(sav->cur.boxes[box].pokemon[bslot]);
        }
        else
        {
            boxpix[bslot] = QPixmap();
        }
        boxscenes[bslot] = new QGraphicsScene();
        boxscenes[bslot]->addPixmap(boxpix[bslot]);
        boxgraphics[bslot]->setScene(boxscenes[bslot]);
    }

    if(ui->cbBoxes->currentIndex() != index)
    {
        ui->cbBoxes->setCurrentIndex(index);
    }
    if(ui->sbBoxIncrem->value() != index)
    {
        ui->sbBoxIncrem->setValue(index);
    }
}
void frmBoxes::on_cbBoxes_currentIndexChanged(int index)
{
    if(SavDecrypted)
    {
        changebox(index);
    }
}
void frmBoxes::on_sbBoxIncrem_valueChanged(int value)
{
    if(SavDecrypted)
    {
        changebox(value);
    }
}
