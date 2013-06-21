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
//#include "mouseeventeater.h"
#include <QFileDialog>
frmBoxes::frmBoxes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::frmBoxes)
{
    ui->setupUi(this);
    ui->sbBoxIncrem->setVisible(false);
    mouseEventEater = new MouseEventEater(this);
    extern pkmviewer * pview;
    pview = new pkmviewer(this);
    //    ui->pbPartySlot1->installEventFilter(mouseEventEater);
    //    ui->pbPartySlot2->installEventFilter(mouseEventEater);
    //    ui->pbPartySlot3->installEventFilter(mouseEventEater);
    //    ui->pbPartySlot4->installEventFilter(mouseEventEater);
    //    ui->pbPartySlot5->installEventFilter(mouseEventEater);
    //    ui->pbPartySlot6->installEventFilter(mouseEventEater);
    //    this->installEventFilter(mouseEventEater);
    //    ui->pc_frame->installEventFilter(mouseEventEater);
    //    ui->party_frame->installEventFilter(mouseEventEater);
}
bw2sav_obj * sav = new bw2sav_obj;
box_obj * frmCurBox = new box_obj;
party_obj * frmParty = new party_obj;
QString SaveFileName = "";
bool SavDecrypted = false;
//pkmviewer * pview;
const QString wTitle = "PKMDS Qt Edition";
//MouseEventEater *mouseEventEater = new MouseEventEater(this);
frmBoxes::~frmBoxes()
{
    try
    {
        try
        {
            closeimgdb();
            closedb();
        }
        catch(...){}
        if((sav > 0) && (sav->cur.adventurestarted != 0))
        {
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
            //        delete ui;
        }
    }
    catch(...){}
    delete ui;
}
void frmBoxes::on_actionLoad_SAV_triggered()
{
    SavDecrypted = false;
    SaveFileName = QFileDialog::getOpenFileName(this,tr("Load a SAV file"),tr(""),tr("SAV Files (*.sav)"));
    if(SaveFileName != "")
    {
        opendb();
        openimgdb();
        read(SaveFileName.toStdString().c_str(),sav);
        this->setWindowTitle(wTitle + QString::fromStdString(" - ") + QString::fromStdWString(getwstring(sav->cur.trainername)));
        //        /*QGraphicsView * */partygraphics = {
        partygraphics[0] = ui->pbPartySlot01;
        partygraphics[1] = ui->pbPartySlot02;
        partygraphics[2] = ui->pbPartySlot03;
        partygraphics[3] = ui->pbPartySlot04;
        partygraphics[4] = ui->pbPartySlot05;
        partygraphics[5] = ui->pbPartySlot06;
        //        };
        //        QPixmap partypix[6];
        //        QGraphicsScene* partyscenes[6];
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
            partyscenes[pslot]->installEventFilter(mouseEventEater);
            partygraphics[pslot]->setScene(partyscenes[pslot]);
            partygraphics[pslot]->installEventFilter(mouseEventEater);
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

//        pkmviewer * pview = new pkmviewer(this);
//        pokemon_obj * apkm = new pokemon_obj;
//        apkm = &(sav->cur.party.pokemon[0].pkm_data);
//        pview->setPKM(apkm);
//        pview->displayPKM();
//        pview->show();
        frmParty = &(sav->cur.party);
    }
}
void frmBoxes::changebox(int index)
{
    int box = index;
    frmCurBox = &(sav->cur.boxes[box]);
    //    /*QGraphicsView* */boxgraphics[30] = {
    boxgraphics[0] = ui->pbBoxSlot01;
    boxgraphics[1] = ui->pbBoxSlot02;
    boxgraphics[2] = ui->pbBoxSlot03;
    boxgraphics[3] = ui->pbBoxSlot04;
    boxgraphics[4] = ui->pbBoxSlot05;
    boxgraphics[5] = ui->pbBoxSlot06;
    boxgraphics[6] = ui->pbBoxSlot07;
    boxgraphics[7] = ui->pbBoxSlot08;
    boxgraphics[8] = ui->pbBoxSlot09;
    boxgraphics[9] = ui->pbBoxSlot10;
    boxgraphics[10] = ui->pbBoxSlot11;
    boxgraphics[11] = ui->pbBoxSlot12;
    boxgraphics[12] = ui->pbBoxSlot13;
    boxgraphics[13] = ui->pbBoxSlot14;
    boxgraphics[14] = ui->pbBoxSlot15;
    boxgraphics[15] = ui->pbBoxSlot16;
    boxgraphics[16] = ui->pbBoxSlot17;
    boxgraphics[17] = ui->pbBoxSlot18;
    boxgraphics[18] = ui->pbBoxSlot19;
    boxgraphics[19] = ui->pbBoxSlot20;
    boxgraphics[20] = ui->pbBoxSlot21;
    boxgraphics[21] = ui->pbBoxSlot22;
    boxgraphics[22] = ui->pbBoxSlot23;
    boxgraphics[23] = ui->pbBoxSlot24;
    boxgraphics[24] = ui->pbBoxSlot25;
    boxgraphics[25] = ui->pbBoxSlot26;
    boxgraphics[26] = ui->pbBoxSlot27;
    boxgraphics[27] = ui->pbBoxSlot28;
    boxgraphics[28] = ui->pbBoxSlot29;
    boxgraphics[29] = ui->pbBoxSlot30;
    //    };
    //    QPixmap boxpix[30];
    //    QGraphicsScene* boxscenes[30];
    for(int bslot = 0; bslot < 30; bslot++)
    {
        if(sav->cur.boxes[box].pokemon[bslot].species != 0)
        {
            //            if(sav->cur.boxes[box].pokemon[bslot].species == Species::keldeo)
            //            {
            //                std::string stop = "stop";
            //            }
            boxpix[bslot] = getpkmicon(sav->cur.boxes[box].pokemon[bslot]);
        }
        else
        {
            boxpix[bslot] = QPixmap();
        }
        boxscenes[bslot] = new QGraphicsScene();
        boxscenes[bslot]->addPixmap(boxpix[bslot]);
        boxscenes[bslot]->installEventFilter(mouseEventEater);
        boxgraphics[bslot]->setScene(boxscenes[bslot]);
        boxgraphics[bslot]->installEventFilter(mouseEventEater);
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

//void QGraphicsView::mousePressEvent(QMouseEvent *event)
//{
//    if(event->button() == Qt::LeftButton)
//    {
////        QPointF mousePoint = ui->graphicsView->mapToScene(event->pos());
////        qDebug() << mousePoint;
//    }
//}
