#include "frmreport.h"
#include "ui_frmreport.h"
frmReport::frmReport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::frmReport)
{
    ui->setupUi(this);
    ppkm = new party_pkm();
    pkm = new pokemon_obj();
    getlist();
}
extern void * theSlot;
extern int frmCurBoxNum;
extern bw2savblock_obj * cursavblock;
extern int frmCurSlotNum;
void frmReport::getlist()
{
    for(int box = 0; box < 24; box++)
    {
        for(int slot = 0; slot < 30; slot++)
        {
            pkm = &(cursavblock->boxes[box].pokemon[slot]);
            if(pkm->species != 0)
            {
                if(lookuppkmtype(pkm,1) == (int)Types::grass)
                {
                    QString speciesname = QString::fromStdString(lookuppkmname(pkm));
                    ui->lstPKM->addItem(speciesname);
                }
            }
        }
    }
}
frmReport::~frmReport()
{
    delete ui;
}
