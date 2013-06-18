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
pkmviewer::pkmviewer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pkmviewer)
{
    ui->setupUi(this);
}
pokemon_obj * pkm = new pokemon_obj;
party_pkm * ppkm = new party_pkm;
void pkmviewer::setPKM(pokemon_obj * pkm_)
{
    pkm = pkm_;
}
void pkmviewer::setPKM(pokemon_obj & pkm_)
{
    pkm = &pkm_;
}
void pkmviewer::setPKM(party_pkm * ppkm_)
{
    ppkm = ppkm_;
    setPKM(ppkm->pkm_data);
}
void pkmviewer::setPKM(party_pkm & ppkm_)
{
    ppkm = &ppkm_;
    setPKM(ppkm->pkm_data);
}

void pkmviewer::displayPKM()
{
    QPixmap * pixmap = new QPixmap();
    QGraphicsScene * scene = new QGraphicsScene();
    *pixmap = getpkmsprite(pkm);
    scene->addPixmap(*pixmap);
    ui->pbSprite->setScene(scene);

}

pkmviewer::~pkmviewer()
{
    delete ui;
}
