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
}
pkmviewer::~pkmviewer()
{
    delete ui;
}
void pkmviewer::on_cbPKMItem_currentIndexChanged(int index)
{
    pkmItem = (Items::items)index;
}
void pkmviewer::on_sbLevel_valueChanged(int arg1)
{
    pkmLevel = arg1;
}
void pkmviewer::fixuppkm(pokemon_obj * pkm)
{
    if((getpkmlevel(pkm)) != pkmLevel)
    {
        setlevel(pkm,pkmLevel);
    }
    tnl = getpkmexptonext(pkm);
    ui->lblTNL->setText(QString::number(tnl));
    ui->pbTNL->setMinimum(getpkmexpatcur(pkm));
    ui->pbTNL->setMaximum(tnl + pkm->exp);
    ui->pbTNL->setValue(pkm->exp);
    pkm->item = (Items::items)(ui->cbPKMItem->currentIndex());
    pkm->species = pkmSpecies;
    // Fix the checksum last!
    calcchecksum(pkm);
}
void pkmviewer::on_btnSaveChanges_clicked()
{
    pkmviewer::fixuppkm(pkm);
}
void pkmviewer::on_btnExportPKMFile_clicked()
{
    pokemon_obj thispkm;
    thispkm = *pkm;
    pkmviewer::fixuppkm(&thispkm);
    std::string PKMFileName = "";
    PKMFileName = (QFileDialog::getSaveFileName(this,tr("Save a PKM file"),tr(""),tr("PKM Files (*.pkm)"))).toStdString();
    if(PKMFileName != "")
    {
        write(PKMFileName.c_str(),thispkm);
    }
}
void pkmviewer::on_cbPKMSpecies_currentIndexChanged(int index)
{
    pkmSpecies = (Species::pkmspecies)(index+1);
    pokemon_obj apkm = *pkm;
    apkm.species = pkmSpecies;
    pkmviewer::swapsprite(apkm);
}
