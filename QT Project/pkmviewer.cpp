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
}
int pkmLevel = 0;
int tnl = 0;
Items::items pkmItem = (Items::items)0;
Species::pkmspecies pkmSpecies = (Species::pkmspecies)0;
pokemon_obj * pkm = new pokemon_obj;
party_pkm * ppkm = new party_pkm;
extern void * theSlot;
void pkmviewer::setPKM(pokemon_obj * pkm_)
{
    pkm = pkm_;
}
void pkmviewer::setPKM(party_pkm * ppkm_)
{
    ppkm = ppkm_;
    setPKM(&(ppkm->pkm_data));
}
void pkmviewer::swapsprite(pokemon_obj apkm)
{
    QPixmap * pixmap = new QPixmap();
    QGraphicsScene * scene = new QGraphicsScene();
    *pixmap = getpkmsprite(apkm);
    scene->addPixmap(*pixmap);
    ui->pbSprite->setScene(scene);
}
void pkmviewer::displayPKM()
{
    tnl = getpkmexptonext(pkm);
    ui->cbPKMItem->setCurrentIndex((int)pkm->item);
    ui->sbLevel->setValue(getpkmlevel(pkm));
    ui->cbPKMSpecies->setCurrentIndex((int)(pkm->species)-1);
    ui->pbTNL->setMinimum(getpkmexpatcur(pkm));
    ui->pbTNL->setMaximum(tnl + pkm->exp);
    ui->pbTNL->setValue(pkm->exp);
    ui->lblTNL->setText(QString::number(tnl));
    ui->txtNickname->setText(QString::fromStdWString(getpkmnickname(pkm)));
    ui->txtOTName->setText(QString::fromStdWString(getpkmotname(pkm)));
    ui->cbNicknamed->setChecked(pkm->ivs.isnicknamed);
    QPixmap * type1pix = new QPixmap();
    QGraphicsScene * type1scene = new QGraphicsScene();
    *type1pix = gettypepic(lookuppkmtype(pkm,1));
    type1scene->addPixmap(*type1pix);
    ui->pbType1->setScene(type1scene);
    int pkmtype2 = 0;
    pkmtype2 = lookuppkmtype(pkm,2);
    QPixmap * type2pix = new QPixmap();
    QGraphicsScene * type2scene = new QGraphicsScene();
    if(pkmtype2 != -1)
    {
        *type2pix = gettypepic(lookuppkmtype(pkm,2));
    }
    type2scene->addPixmap(*type2pix);
    ui->pbType2->setScene(type2scene);
    QPixmap * shinypix = new QPixmap();
    QGraphicsScene * shinyscene = new QGraphicsScene();
    if(getpkmshiny(pkm))
    {
        *shinypix = getshinystar();
    }
    shinyscene->addPixmap(*shinypix);
    ui->pbShiny->setScene(shinyscene);
    QPixmap * genderpix = new QPixmap();
    QGraphicsScene * genderscene = new QGraphicsScene();
    Genders::genders thegender = getpkmgender(pkm);
    if((thegender == Genders::male) || (thegender == Genders::female))
    {
        *genderpix = getgenderpic(thegender);
    }
    genderscene->addPixmap(*genderpix);
    ui->pbGender->setScene(genderscene);
}
pkmviewer::~pkmviewer()
{
    delete ui;
}
void pkmviewer::on_cbPKMItem_currentIndexChanged(int index)
{
    if((pkm->species > 0) && ((pkm->pid > 0) || (pkm->checksum > 0)))
    {
        pkmItem = (Items::items)index;
    }
}
void pkmviewer::on_sbLevel_valueChanged(int arg1)
{
    if((pkm->species > 0) && ((pkm->pid > 0) || (pkm->checksum > 0)))
    {
        pkmLevel = arg1;
    }
}
void pkmviewer::fixuppkm(pokemon_obj * apkm)
{
    if((getpkmlevel(apkm)) != pkmLevel)
    {
        setlevel(apkm,pkmLevel);
    }
    tnl = getpkmexptonext(apkm);
    //    ui->lblTNL->setText(QString::number(tnl));
    //    ui->pbTNL->setMinimum(getpkmexpatcur(apkm));
    //    ui->pbTNL->setMaximum(tnl + apkm->exp);
    //    ui->pbTNL->setValue(apkm->exp);
    apkm->item = (Items::items)(ui->cbPKMItem->currentIndex());
    apkm->species = pkmSpecies;
    //    memset(&(apkm->nickname),0x00,22);
    //    memset(&(apkm->otname),0x00,16);
    ui->txtNickname->text().toWCharArray(apkm->nickname);
    ui->txtOTName->text().toWCharArray(apkm->otname);
    apkm->ivs.isnicknamed = ui->cbNicknamed->isChecked();
    byte * btpnt = new byte;
    btpnt = reinterpret_cast<byte*>(&(apkm->nickname));
    memset(btpnt+(ui->txtNickname->text().length()*2),0xff,2);
    btpnt += 20;
    memset(btpnt,0xff,2);
    btpnt = reinterpret_cast<byte*>(&(apkm->otname));
    memset(btpnt+(ui->txtOTName->text().length()*2),0xff,2);
    btpnt += 14;
    memset(btpnt,0xff,2);
    //    int nicklength = ui->txtNickname->text().length();
    //    int otnamelength = ui->txtOTName->text().length();
    // Fix the checksum last!
    calcchecksum(apkm);
}
void pkmviewer::on_btnSaveChanges_clicked()
{
    pkmviewer::fixuppkm(pkm);
    this->setWindowTitle(QString::fromStdWString(getpkmnickname(pkm)));
    pkmviewer::displayPKM();
    QPixmap * iconpixmap = new QPixmap();
    QGraphicsScene * iconscene = new QGraphicsScene();
    *iconpixmap = getpkmicon(pkm);
    iconscene->addPixmap(*iconpixmap);
    QGraphicsView * theView = new QGraphicsView;
    theView = (QGraphicsView*)theSlot;
    theView->setScene(iconscene);
}
void pkmviewer::on_btnExportPKMFile_clicked()
{
    pokemon_obj * thispkm = new pokemon_obj;
    *thispkm = *pkm;
    pkmviewer::fixuppkm(thispkm);
    std::string PKMFileName = "";
    PKMFileName = (QFileDialog::getSaveFileName(this,tr("Save a PKM file"),tr(""),tr("PKM Files (*.pkm)"))).toStdString();
    if(PKMFileName != "")
    {
        write(PKMFileName.c_str(),thispkm);
    }
}
void pkmviewer::on_cbPKMSpecies_currentIndexChanged(int index)
{
    if((pkm->species > 0) && ((pkm->pid > 0) || (pkm->checksum > 0)))
    {
        pkmSpecies = (Species::pkmspecies)(index+1);
        pokemon_obj apkm = *pkm;
        apkm.species = pkmSpecies;
        pkmviewer::swapsprite(apkm);
        if((index+1) != ui->sbSpecies->value())
        {
            ui->sbSpecies->setValue(index+1);
        }
    }
}
void pkmviewer::on_sbSpecies_valueChanged(int arg1)
{
    if((pkm->species > 0) && ((pkm->pid > 0) || (pkm->checksum > 0)))
    {
        if((arg1-1) != ui->cbPKMSpecies->currentIndex())
        {
            ui->cbPKMSpecies->setCurrentIndex(arg1-1);
        }
    }
}
void pkmviewer::on_txtNickname_textChanged(const QString &arg1)
{
    if((pkm->species > 0) && ((pkm->pid > 0) || (pkm->checksum > 0)))
    {
        ui->cbNicknamed->setChecked(true);
    }
}
