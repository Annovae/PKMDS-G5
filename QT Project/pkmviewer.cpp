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

}

pkmviewer::~pkmviewer()
{
    delete ui;
}
