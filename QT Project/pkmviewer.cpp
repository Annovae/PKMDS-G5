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
GatorShark, Chase, Jiggy-Ninja, Codr, Bond697, mingot, Guested,
coolbho3000 and of course, COM.

Some documentation available at: http://www.projectpokemon.org/wiki/
*/
#include "pkmviewer.h"
#include "ui_pkmviewer.h"
#include <QFileDialog>
pkmviewer::pkmviewer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pkmviewer)
{
    ui->setupUi(this);
    QString itemname = "";
    for(int itemindex = 0; itemindex < (int)Items::revealglass; itemindex++)
    {
        itemname = QString::fromStdString(lookupitemname(itemindex));
        ui->cbPKMItem->addItem(itemname);
    }
    for(int speciesindex = 1; speciesindex < 650; speciesindex++)
    {
        itemname = QString::fromStdString(lookuppkmname(speciesindex));
        ui->cbPKMSpecies->addItem(itemname);
    }
    this->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    this->setMinimumSize(this->size());
    this->setMaximumSize(this->size());
    this->setSizeGripEnabled(false);
}
bool levelchangeok = true;
bool redisplayok = false;
pokemon_obj * temppkm = new pokemon_obj;
pokemon_obj * pkm = new pokemon_obj;
party_pkm * ppkm = new party_pkm;
bool ispartypkm = false;
extern void * theSlot;
extern int frmCurBoxNum;
int startbox = 0;
void pkmviewer::setPKM(pokemon_obj * pkm_, int box, bool isPartyPKM)
{
    startbox = box;
    pkm = pkm_;
    *temppkm = *pkm;
    redisplayok = false;
    ispartypkm = isPartyPKM;
}
void pkmviewer::setPKM(party_pkm * ppkm_, int box, bool isPartyPKM)
{
    ppkm = ppkm_;
    setPKM(&(ppkm->pkm_data),box, isPartyPKM);
}
void pkmviewer::displayPKM()
{
    switch(temppkm->metlevel_otgender.otgender)
    {
    case Genders::male:
        ui->rbOTMale->setChecked(true);
        break;
    case Genders::female:
        ui->rbOTFemale->setChecked(true);
        break;
    default:
        ui->rbOTMale->setChecked(true);
        break;
    }
    ui->sbTID->setValue(temppkm->tid);
    ui->sbSID->setValue(temppkm->sid);
    ui->cbPKMSpecies->setCurrentIndex((int)(temppkm->species)-1);
    ui->sbSpecies->setValue(temppkm->species);
    ui->cbPKMItem->setCurrentIndex((int)temppkm->item);
    ui->sbLevel->setValue(getpkmlevel(temppkm));
    ui->sbEXP->setMaximum(getpkmexpatlevel(temppkm->species,100));
    ui->sbEXP->setValue(temppkm->exp);
    ui->pbTNL->setMinimum(getpkmexpatcur(temppkm));
    ui->pbTNL->setMaximum(getpkmexptonext(temppkm) + temppkm->exp);
    ui->pbTNL->setValue(temppkm->exp);
    ui->lblTNL->setText(QString::number(getpkmexptonext(temppkm)));
    ui->txtNickname->setText(QString::fromStdWString(getpkmnickname(temppkm)));
    QColor otcolor = Qt::blue;
    if(temppkm->metlevel_otgender.otgender == Genders::female)
    {
        otcolor = Qt::red;
    }
    QPalette palette = ui->txtOTName->palette();
    palette.setColor(ui->txtOTName->foregroundRole(), otcolor);
    ui->txtOTName->setPalette(palette);
    ui->txtOTName->setText(QString::fromStdWString(getpkmotname(temppkm)));
    ui->cbNicknamed->setChecked(temppkm->ivs.isnicknamed);
    QPixmap * itempix = new QPixmap();
    QGraphicsScene * itemscene = new QGraphicsScene();
    *itempix = getitemimage(temppkm->item);
    itemscene->addPixmap(*itempix);
    ui->pbHeldItem->setScene(itemscene);
    QPixmap * type1pix = new QPixmap();
    QGraphicsScene * type1scene = new QGraphicsScene();
    *type1pix = gettypepic(lookuppkmtype(temppkm,1));
    type1scene->addPixmap(*type1pix);
    ui->pbType1->setScene(type1scene);
    int pkmtype2 = 0;
    pkmtype2 = lookuppkmtype(temppkm,2);
    QPixmap * type2pix = new QPixmap();
    QGraphicsScene * type2scene = new QGraphicsScene();
    if(pkmtype2 != -1)
    {
        *type2pix = gettypepic(lookuppkmtype(temppkm,2));
    }
    type2scene->addPixmap(*type2pix);
    ui->pbType2->setScene(type2scene);
    QPixmap * shinypix = new QPixmap();
    QGraphicsScene * shinyscene = new QGraphicsScene();
    if(getpkmshiny(temppkm))
    {
        *shinypix = getshinystar();
    }
    shinyscene->addPixmap(*shinypix);
    ui->pbShiny->setScene(shinyscene);
    QPixmap * genderpix = new QPixmap();
    QGraphicsScene * genderscene = new QGraphicsScene();
    Genders::genders thegender = getpkmgender(temppkm);
    if((thegender == Genders::male) || (thegender == Genders::female))
    {
        *genderpix = getgenderpic(thegender);
    }
    genderscene->addPixmap(*genderpix);
    ui->pbGender->setScene(genderscene);
    QPixmap * spritepixmap = new QPixmap();
    QGraphicsScene * spritescene = new QGraphicsScene();
    *spritepixmap = getpkmsprite(temppkm);
    spritescene->addPixmap(*spritepixmap);
    ui->pbSprite->setScene(spritescene);
    redisplayok = true;
}
pkmviewer::~pkmviewer()
{
    delete ui;
}
void pkmviewer::on_cbPKMItem_currentIndexChanged(int index)
{
    if((temppkm->species > 0) && ((temppkm->pid > 0) || (temppkm->checksum > 0)))
    {
        temppkm->item = (Items::items)index;
        if(redisplayok)
        {
            pkmviewer::displayPKM();
        }
    }
}
void pkmviewer::on_sbLevel_valueChanged(int arg1)
{
    if((temppkm->species > 0) && ((temppkm->pid > 0) || (temppkm->checksum > 0)))
    {
        if(levelchangeok)
        {
            ui->sbEXP->setValue(getpkmexpatlevel(temppkm->species,arg1));
        }
    }
}
void pkmviewer::on_btnSaveChanges_clicked()
{
    // Fix the checksum last!
    calcchecksum(temppkm);
    *pkm = *temppkm;
    this->setWindowTitle(QString::fromStdWString(getpkmnickname(temppkm)));
    if((frmCurBoxNum == startbox) || ispartypkm)
    {
        QPixmap * iconpixmap = new QPixmap();
        QGraphicsScene * iconscene = new QGraphicsScene();
        *iconpixmap = getpkmicon(temppkm);
        iconscene->addPixmap(*iconpixmap);
        QGraphicsView * theView = new QGraphicsView;
        theView = (QGraphicsView*)theSlot;
        theView->setScene(iconscene);
    }
    if(redisplayok)
    {
        pkmviewer::displayPKM();
    }
}
void pkmviewer::on_btnExportPKMFile_clicked()
{
    std::string PKMFileName = "";
    PKMFileName = (QFileDialog::getSaveFileName(this,tr("Save a PKM file"),tr(""),tr("PKM Files (*.pkm)"))).toStdString();
    if(PKMFileName != "")
    {
        // Fix the checksum last!
        calcchecksum(temppkm);
        write(PKMFileName.c_str(),temppkm);
    }
}
void pkmviewer::on_cbPKMSpecies_currentIndexChanged(int index)
{
    if((temppkm->species > 0) && ((temppkm->pid > 0) || (temppkm->checksum > 0)))
    {
        if(redisplayok)
        {
            temppkm->species = (Species::pkmspecies)(index+1);

            if((index+1) != ui->sbSpecies->value())
            {
                ui->sbSpecies->setValue(index+1);
            }
            pkmviewer::displayPKM();
        }
    }
}
void pkmviewer::on_sbSpecies_valueChanged(int arg1)
{
    if((temppkm->species > 0) && ((temppkm->pid > 0) || (temppkm->checksum > 0)))
    {
        if((arg1-1) != ui->cbPKMSpecies->currentIndex())
        {
            ui->cbPKMSpecies->setCurrentIndex(arg1-1);
        }
    }
}
void pkmviewer::on_txtNickname_textChanged(const QString &arg1)
{
    if((temppkm->species > 0) && ((temppkm->pid > 0) || (temppkm->checksum > 0)))
    {
        ui->cbNicknamed->setChecked(true);
        arg1.toWCharArray(temppkm->nickname);
        byte * btpnt = new byte;
        btpnt = reinterpret_cast<byte*>(&(temppkm->nickname));
        memset(btpnt+(ui->txtNickname->text().length()*2),0xff,2);
        btpnt += 20;
        memset(btpnt,0xff,2);
    }
}
void pkmviewer::on_sbEXP_valueChanged(int arg1)
{
    if((temppkm->species > 0) && ((temppkm->pid > 0) || (temppkm->checksum > 0)))
    {
        if(redisplayok)
        {
            temppkm->exp = arg1;
            ui->pbTNL->setMinimum(getpkmexpatlevel(temppkm->species,ui->sbLevel->value()));
            ui->pbTNL->setMaximum(getpkmexptonext((int)temppkm->species,arg1) + arg1);
            ui->pbTNL->setValue(arg1);
            ui->lblTNL->setText(QString::number(getpkmexptonext((int)temppkm->species,arg1)));
            levelchangeok = false;
            pkmviewer::displayPKM();
        }
        levelchangeok = true;
    }
}
void pkmviewer::on_rbOTMale_toggled(bool checked)
{
    if((temppkm->species > 0) && ((temppkm->pid > 0) || (temppkm->checksum > 0)))
    {
        if(checked)
        {
            temppkm->metlevel_otgender.otgender = Genders::male;
            if(redisplayok)
            {
                pkmviewer::displayPKM();
            }
        }
    }
}
void pkmviewer::on_rbOTFemale_toggled(bool checked)
{
    if((temppkm->species > 0) && ((temppkm->pid > 0) || (temppkm->checksum > 0)))
    {
        if(checked)
        {
            temppkm->metlevel_otgender.otgender = Genders::female;
            if(redisplayok)
            {
                pkmviewer::displayPKM();
            }
        }
    }
}
void pkmviewer::on_cbNicknamed_toggled(bool checked)
{
    if((temppkm->species > 0) && ((temppkm->pid > 0) || (temppkm->checksum > 0)))
    {
        temppkm->ivs.isnicknamed = checked;
    }
}
void pkmviewer::on_txtOTName_textChanged(const QString &arg1)
{
    arg1.toWCharArray(temppkm->otname);
    byte * btpnt = new byte;
    btpnt = reinterpret_cast<byte*>(&(temppkm->otname));
    memset(btpnt+(ui->txtOTName->text().length()*2),0xff,2);
    btpnt += 14;
    memset(btpnt,0xff,2);
}

void pkmviewer::on_sbTID_valueChanged(int arg1)
{
    if((temppkm->species > 0) && ((temppkm->pid > 0) || (temppkm->checksum > 0)))
    {
        temppkm->tid = arg1;
    }
}

void pkmviewer::on_sbSID_valueChanged(int arg1)
{
    if((temppkm->species > 0) && ((temppkm->pid > 0) || (temppkm->checksum > 0)))
    {
        temppkm->sid = arg1;
    }
}
