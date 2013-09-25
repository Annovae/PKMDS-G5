/*
Copyright (C) 2013  codemonkey85

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/
#include "frmboxes.h"
#include "ui_frmboxes.h"
#include "pkmviewer.h"
#include "frmreport.h"
#include <QFileDialog>
#include <QMessageBox>
frmBoxes::frmBoxes(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::frmBoxes)
{
    opendb();
    openimgdb();
    ui->setupUi(this);
    ui->saBoxes->setVisible(false);
    ui->saBoxes->setEnabled(false);
    ui->sbBoxIncrem->setVisible(false);
    ui->sbBoxIncrem->setEnabled(false);
    mouseEventEater = new MouseEventEater(this);
    extern pkmviewer * pview;
    pview = new pkmviewer(this);
    partygraphics[0] = ui->pbPartySlot01;
    partygraphics[1] = ui->pbPartySlot02;
    partygraphics[2] = ui->pbPartySlot03;
    partygraphics[3] = ui->pbPartySlot04;
    partygraphics[4] = ui->pbPartySlot05;
    partygraphics[5] = ui->pbPartySlot06;
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
    boxpreviewgraphics[0] = ui->pbBox01;
    boxpreviewgraphics[1] = ui->pbBox02;
    boxpreviewgraphics[2] = ui->pbBox03;
    boxpreviewgraphics[3] = ui->pbBox04;
    boxpreviewgraphics[4] = ui->pbBox05;
    boxpreviewgraphics[5] = ui->pbBox06;
    boxpreviewgraphics[6] = ui->pbBox07;
    boxpreviewgraphics[7] = ui->pbBox08;
    boxpreviewgraphics[8] = ui->pbBox09;
    boxpreviewgraphics[9] = ui->pbBox10;
    boxpreviewgraphics[10] = ui->pbBox11;
    boxpreviewgraphics[11] = ui->pbBox12;
    boxpreviewgraphics[12] = ui->pbBox13;
    boxpreviewgraphics[13] = ui->pbBox14;
    boxpreviewgraphics[14] = ui->pbBox15;
    boxpreviewgraphics[15] = ui->pbBox16;
    boxpreviewgraphics[16] = ui->pbBox17;
    boxpreviewgraphics[17] = ui->pbBox18;
    boxpreviewgraphics[18] = ui->pbBox19;
    boxpreviewgraphics[19] = ui->pbBox20;
    boxpreviewgraphics[20] = ui->pbBox21;
    boxpreviewgraphics[21] = ui->pbBox22;
    boxpreviewgraphics[22] = ui->pbBox23;
    boxpreviewgraphics[23] = ui->pbBox24;
    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);
}
frmBoxes * boxViewer;
frmReport * report;
bw2sav_obj * sav = new bw2sav_obj;
bw2savblock_obj * cursavblock = new bw2savblock_obj;
bw2savblock_obj * baksavblock = new bw2savblock_obj;
box_obj * frmCurBox = new box_obj;
int frmCurBoxNum = 0;
party_obj * frmParty = new party_obj;
void * theSlot;
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
    delete ui;
}
void frmBoxes::on_actionLoad_SAV_triggered()
{
    SaveFileName = QFileDialog::getOpenFileName(this,tr("Load a save file"),tr(""),tr("Save Files (*.sav *.dsv)"));
    if(SaveFileName != "")
    {
        boxViewer = this;
        SavDecrypted = false;
        read(SaveFileName.toStdString().c_str(),sav);
        cursavblock = &(sav->cur);
        baksavblock = &(sav->bak);
        this->setWindowTitle(wTitle + QString::fromStdString(" - ") + QString::fromStdWString(getsavtrainername(cursavblock))); // QString::fromStdWString(getwstring(cursavblock->trainername)));
        QGraphicsScene * partyscene = new QGraphicsScene();
        for(int i = 0; i < 6; i++)
        {
            pix = QPixmap();
            partyscene = new QGraphicsScene();
            partyscene->addPixmap(pix);
            partygraphics[i]->setScene(partyscene);
        }
        for(uint32 pslot = 0; pslot < cursavblock->party.size; pslot++)
        {
            decryptpkm(&(cursavblock->party.pokemon[pslot]));
            pix = getpkmicon(cursavblock->party.pokemon[pslot].pkm_data);
            partyscene = new QGraphicsScene();
            partyscene->addPixmap(pix);
            partygraphics[pslot]->setScene(partyscene);
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
            ui->cbBoxes->setItemText(boxnum,QString::fromStdWString(getwstring(cursavblock->boxnames[boxnum])));
            for(int boxslot = 0; boxslot < 30; boxslot++)
            {
                decryptpkm(&(cursavblock->boxes[boxnum].pokemon[boxslot]));
                //                decryptpkm(&(baksavblock->boxes[boxnum].pokemon[boxslot]));
            }
        }
        SavDecrypted = true;
        ui->sbBoxIncrem->setEnabled(true);
        ui->sbBoxIncrem->setVisible(true);
        ui->saBoxes->setEnabled(true);
        ui->saBoxes->setVisible(true);
        ui->cbBoxes->setEnabled(true);
        ui->sbBoxIncrem->setValue(cursavblock->curbox);
        frmParty = &(cursavblock->party);
        for(int ic = 0; ic < 24; ic++)
        {
            boxpreviewgraphics[ic]->installEventFilter(mouseEventEater);
            boxpreviewgraphics[ic]->viewport()->setMouseTracking(true);
            boxpreviewgraphics[ic]->viewport()->setProperty("Index",ic);
            boxpreviewgraphics[ic]->viewport()->installEventFilter(mouseEventEater);
        }
        refreshboxgrids();
        changebox(cursavblock->curbox);
    }
}
void frmBoxes::changebox(int index)
{
    int box = index;
    frmCurBoxNum = index;
    frmCurBox = &(cursavblock->boxes[box]);
    QGraphicsScene * boxscene = new QGraphicsScene();
    for(int bslot = 0; bslot < 30; bslot++)
    {
        pix = QPixmap();
        if(cursavblock->boxes[box].pokemon[bslot].species != Species::NOTHING)
        {
            pix = getpkmicon(cursavblock->boxes[box].pokemon[bslot]);
        }
        boxscene = new QGraphicsScene();
        boxscene->addPixmap(pix);
        boxgraphics[bslot]->setScene(boxscene);
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
    QPixmap * wallpaperpixmap = new QPixmap;
    *wallpaperpixmap = getwallpaperimage(cursavblock->boxwallpapers[box]);
    QGraphicsScene * wallpaperscene = new QGraphicsScene;
    wallpaperscene->addPixmap(*wallpaperpixmap);
    ui->pbPCBox->setScene(wallpaperscene);
    ui->pbPCBox->setSceneRect(0,0,192,160);
    ui->pbPCBox->fitInView(0,0,153,111);
    for(int box = 0; box < 24; box++)
    {
        boxpreviewgraphics[box]->setFrameStyle(0);
    }
    ui->saBoxes->verticalScrollBar()->setValue(index * 76);
    boxpreviewgraphics[index]->setFrameStyle(1);
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
void frmBoxes::on_actionSave_changes_triggered()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Save Data");
    msgBox.setText("Changes have been made to this save.");
    msgBox.setInformativeText("Do you want to overwrite the file and save your changes?");
    msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Save);
    int ret = msgBox.exec();
    if(ret == 0x800) // 2048 (or 0x800) = Save, 4194304 (or 0x400000) = Cancel
    {
        if((sav > 0) && (cursavblock->adventurestarted != 0))
        {
            bw2sav_obj * savout = new bw2sav_obj;
            *savout = *sav;
            bool isbw2 = savisbw2(savout);
            savout->cur.curbox = frmCurBoxNum; // ui->cbBoxes->currentIndex();
            for(uint32 pslot = 0; pslot < savout->cur.party.size; pslot++)
            {
                encryptpkm(&(savout->cur.party.pokemon[pslot]));
            }
            calcpartychecksum(&(savout->cur),isbw2);
            for(int boxnum = 0; boxnum < 24; boxnum++)
            {
                for(int boxslot = 0; boxslot < 30; boxslot++)
                {
                    encryptpkm(&(savout->cur.boxes[boxnum].pokemon[boxslot]));
                }
                calcboxchecksum(&(savout->cur),boxnum,isbw2);
            }
            savout->cur.block1checksum = getchecksum(&(savout->cur),0x0,0x3e0);
            fixsavchecksum(savout, isbw2);
            write(SaveFileName.toStdString().c_str(),savout);
            msgBox.setText("The file has been saved.");
            msgBox.setInformativeText("");
            msgBox.setStandardButtons(QMessageBox::Ok);
            msgBox.setDefaultButton(QMessageBox::Ok);
        }
    }
    else
    {
        msgBox.setText("The file will not be saved.");
        msgBox.setInformativeText("");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
    }
    ret = msgBox.exec();
}
void frmBoxes::refreshboxgrid(int box)
{
        QImage grid = QImage(60,50,QImage::Format_RGB32);
        QPixmap gridpix;
        QGraphicsScene * gridscene = new QGraphicsScene();
        pokemon_obj * pkm_c = new pokemon_obj;
        uint32 color_val = 0;
        for(int sloty = 0; sloty < 5; sloty++)
        {
            for(int slotx = 0; slotx < 6; slotx++)
            {
                pkm_c = &(sav->cur.boxes[box].pokemon[(sloty*6)+slotx]);
                color_val = getpkmcolor(pkm_c->species);
                for(int x = 0; x < 10; x++)
                {
                    for(int y = 0; y < 10; y++)
                    {
                        grid.setPixel((slotx * 10) + x,(sloty * 10) + y,color_val);
                    }
                }
            }
            gridpix = QPixmap::fromImage(grid);
            gridscene = new QGraphicsScene();
            gridscene->addPixmap(gridpix);
            boxpreviewgraphics[box]->setScene(gridscene);
        }
}
void frmBoxes::refreshboxgrids()
{
    for(int box = 0; box < 24; box++)
    {
        refreshboxgrid(box);
    }
}
void frmBoxes::on_actionSearch_triggered()
{
    report = new frmReport();
    report->show();
}
