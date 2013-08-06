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
#include "pkmviewer.h"
#include "ui_pkmviewer.h"
#include <QFileDialog>
pkmviewer::pkmviewer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pkmviewer)
{
    ui->setupUi(this);
    mouseEventEater = new MouseEventEater(this);
    markingsgraphics[(int)Markings::circle] = ui->pbCircle;
    markingsgraphics[(int)Markings::diamond] = ui->pbDiamond;
    markingsgraphics[(int)Markings::heart] = ui->pbHeart;
    markingsgraphics[(int)Markings::square] = ui->pbSquare;
    markingsgraphics[(int)Markings::star] = ui->pbStar;
    markingsgraphics[(int)Markings::triangle] = ui->pbTriangle;
    for(int i = 0; i < 6; i++)
    {
        markingspix[i] = getmarkingimage(Markings::markings(i), false);
        markingsscene[i] = new QGraphicsScene();
        markingsscene[i]->addPixmap(markingspix[i]);
        markingsscene[i]->installEventFilter(mouseEventEater);
        markingsgraphics[i]->setScene(markingsscene[i]);
        markingsgraphics[i]->installEventFilter(mouseEventEater);
    }
    QComboBox * moveboxes[4] = {ui->cbMove1,ui->cbMove2,ui->cbMove3,ui->cbMove4};
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
    for(int natureindex = 0; natureindex < 25; natureindex++)
    {
        itemname = QString::fromStdString(getnaturename(natureindex));
        ui->cbNatures->addItem(itemname);
    }
    for(int moveid = 0; moveid <= ((int)Moves::fusionbolt); moveid++)
    {
        for(int moveindex = 0; moveindex < 4; moveindex++)
        {
            itemname = QString::fromStdString(lookupmovename(moveid));
            moveboxes[moveindex]->addItem(itemname);
        }
    }
    for(int abilityindex = 0; abilityindex < (int)Abilities::teravolt; abilityindex++)
    {
        itemname = QString::fromStdString(lookupabilityname(abilityindex));
        ui->cbPKMAbility->addItem(itemname);
    }
    this->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Fixed);
    this->setMinimumSize(this->size());
    this->setMaximumSize(this->size());
    this->setSizeGripEnabled(false);
}
//QGraphicsView * extmarkingsgraphics;
//QPixmap extmarkingspix[6];
//void* extmarkingsscene;
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
    redisplayok = false;
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
    QPalette OTpalette = ui->txtOTName->palette();
    OTpalette.setColor(ui->txtOTName->foregroundRole(), otcolor);
    ui->txtOTName->setPalette(OTpalette);
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
    QPixmap * spritepixmap = new QPixmap();
    QGraphicsScene * spritescene = new QGraphicsScene();
    *spritepixmap = getpkmsprite(temppkm);
    spritescene->addPixmap(*spritepixmap);
    ui->pbSprite->setScene(spritescene);
    QPixmap * ballpixmap = new QPixmap();
    QGraphicsScene * ballscene = new QGraphicsScene();
    *ballpixmap = getballpic(temppkm->ball);
    ballscene->addPixmap(*ballpixmap);
    ui->pbBall->setScene(ballscene);
    ui->sbHPIV->setValue(temppkm->ivs.hp);
    ui->sbAtkIV->setValue(temppkm->ivs.attack);
    ui->sbDefIV->setValue(temppkm->ivs.defense);
    ui->sbSpAtkIV->setValue(temppkm->ivs.spatk);
    ui->sbSpDefIV->setValue(temppkm->ivs.spdef);
    ui->sbSpeedIV->setValue(temppkm->ivs.speed);
    ui->sbHPEV->setValue(temppkm->evs.hp);
    ui->sbAtkEV->setValue(temppkm->evs.attack);
    ui->sbDefEV->setValue(temppkm->evs.defense);
    ui->sbSpAtkEV->setValue(temppkm->evs.spatk);
    ui->sbSpDefEV->setValue(temppkm->evs.spdef);
    ui->sbSpeedEV->setValue(temppkm->evs.speed);
    ui->cbNatures->setCurrentIndex(temppkm->nature);
    ui->cbMove1->setCurrentIndex((int)temppkm->moves[0]);
    ui->cbMove2->setCurrentIndex((int)temppkm->moves[1]);
    ui->cbMove3->setCurrentIndex((int)temppkm->moves[2]);
    ui->cbMove4->setCurrentIndex((int)temppkm->moves[3]);
    ui->cbPKMAbility->setCurrentIndex(temppkm->ability);
    QSpinBox * movePPboxes[4] = {ui->sbMove1PP,ui->sbMove2PP,ui->sbMove3PP,ui->sbMove4PP};
    QSpinBox * movePPUpboxes[4] = {ui->sbMove1PPUps,ui->sbMove2PPUps,ui->sbMove3PPUps,ui->sbMove4PPUps};
    for(int movenum = 0; movenum < 4; movenum++)
    {
        movePPboxes[movenum]->setValue(pkm->pp[movenum]);
        movePPUpboxes[movenum]->setValue(pkm->ppup[movenum]);
    }
    redisplayok = true;
    updategenderpic();
    updateabilityflavor();
    updatemarks();
    updatestats();
    updatestatcolors();
    updatemoveflavor();
    updatemovepp();
    updatemoveimages();
}
void pkmviewer::updatestats()
{
    if(redisplayok)
    {
        ui->sbTotalEVs->setValue
                (
                    temppkm->evs.hp +
                    temppkm->evs.attack +
                    temppkm->evs.defense +
                    temppkm->evs.spatk +
                    temppkm->evs.spdef +
                    temppkm->evs.speed
                    );
        ui->sbHP->setValue(getpkmstat(temppkm,Stat_IDs::hp));
        ui->sbAtk->setValue(getpkmstat(temppkm,Stat_IDs::attack));
        ui->sbDef->setValue(getpkmstat(temppkm,Stat_IDs::defense));
        ui->sbSpAtk->setValue(getpkmstat(temppkm,Stat_IDs::spatk));
        ui->sbSpDef->setValue(getpkmstat(temppkm,Stat_IDs::spdef));
        ui->sbSpeed->setValue(getpkmstat(temppkm,Stat_IDs::speed));
    }
}
void pkmviewer::updatestatcolors()
{
    if(redisplayok)
    {
        QLabel * statlbls[6] =
        {
            ui->lblHPIV,
            ui->lblAtkIV,
            ui->lblDefIV,
            ui->lblSpAtkIV,
            ui->lblSpDefIV,
            ui->lblSpeedIV
        };
        QColor statcolor;
        int incr = 0;
        int decr = 0;
        for(int i = 0; i < 6; i++)
        {
            statcolor = Qt::black;
            incr = getnatureincrease(temppkm)-1;
            decr = getnaturedecrease(temppkm)-1;

            if(incr == i)
            {
                if(decr == i)
                {
                    statcolor = Qt::black;
                }
                else
                {
                    statcolor = Qt::red;
                }
            }
            if(decr == i)
            {
                if(incr == i)
                {
                    statcolor = Qt::black;
                }
                else
                {
                    statcolor = Qt::blue;
                }
            }
            QPalette statpalette = statlbls[i]->palette();
            statpalette.setColor(statlbls[i]->foregroundRole(), statcolor);
            statlbls[i]->setPalette(statpalette);
        }
    }
}
void pkmviewer::updatemarks()
{
    if(redisplayok)
    {
        for(int i = 0; i < 6; i++)
        {
            bool marked = false;
            switch(Markings::markings(i))
            {
            case Markings::circle:
                marked = temppkm->markings.circle;
                break;
            case Markings::diamond:
                marked = temppkm->markings.diamond;
                break;
            case Markings::heart:
                marked = temppkm->markings.heart;
                break;
            case Markings::square:
                marked = temppkm->markings.square;
                break;
            case Markings::star:
                marked = temppkm->markings.star;
                break;
            case Markings::triangle:
                marked = temppkm->markings.triangle;
                break;
            default:
                marked = false;
                break;
            }
            markingspix[i] = getmarkingimage(Markings::markings(i), marked);
            markingsscene[i] = new QGraphicsScene();
            markingsscene[i]->addPixmap(markingspix[i]);
            markingsscene[i]->installEventFilter(mouseEventEater);
            markingsgraphics[i]->setScene(markingsscene[i]);
            markingsgraphics[i]->installEventFilter(mouseEventEater);
            //        extmarkingsgraphics[i] = markingsgraphics[i];
            //        extmarkingspix[i] = markingspix[i];
            //        extmarkingsscene[i] = markingsscene[i];
        }
    }
}
void pkmviewer::updatemovepp()
{
    if(redisplayok)
    {
        QSpinBox * moveTotalPPboxes[4] = {ui->sbMove1TotalPP,ui->sbMove2TotalPP,ui->sbMove3TotalPP,ui->sbMove4TotalPP};
        QSpinBox * movePPboxes[4] = {ui->sbMove1PP,ui->sbMove2PP,ui->sbMove3PP,ui->sbMove4PP};
        int curppval = 0;
        for(int movenum = 0; movenum < 4; movenum++)
        {
            curppval = getmovetotalpp(temppkm,movenum);
            moveTotalPPboxes[movenum]->setValue(curppval);
            movePPboxes[movenum]->setValue(curppval);
        }
    }
}
void pkmviewer::updatemoveimages()
{
    if(redisplayok)
    {
        QGraphicsView * movetypegraphics[4] = {ui->pbMove1Type,ui->pbMove2Type,ui->pbMove3Type,ui->pbMove4Type};
        QGraphicsView * movecatgraphics[4] = {ui->pbMove1Cat,ui->pbMove2Cat,ui->pbMove3Cat,ui->pbMove4Cat};
        QPixmap * movepix = new QPixmap();
        QGraphicsScene * movescene = new QGraphicsScene();
        for(int movenum = 0; movenum < 4; movenum++)
        {
            movepix = new QPixmap();
            movescene = new QGraphicsScene();
            *movepix = gettypepic((int)(getmovetype(temppkm->moves[movenum])));
            movescene->addPixmap(*movepix);
            movetypegraphics[movenum]->setScene(movescene);
            movepix = new QPixmap();
            movescene = new QGraphicsScene();
            *movepix = getmovecatimage(temppkm->moves[movenum]);
            movescene->addPixmap(*movepix);
            movecatgraphics[movenum]->setScene(movescene);
        }
    }
}
void pkmviewer::updatemoveflavor()
{
    if(redisplayok)
    {
        QLabel * lblFlavors[4] = {ui->lblMove1Flavor,ui->lblMove2Flavor,ui->lblMove3Flavor,ui->lblMove4Flavor};
        std::string flavor = "";
        for(int movenum = 0; movenum < 4; movenum++)
        {
            flavor = lookupmoveflavortext(temppkm,movenum);
            lblFlavors[movenum]->setText(QString::fromStdString(flavor));
        }
    }
}
void pkmviewer::updateabilityflavor()
{
    if(redisplayok)
    {
        ui->lblAbilityFlavor->setText(QString::fromStdString(lookupabilityflavortext(temppkm->ability)));
    }
}
void pkmviewer::updategenderpic()
{
    QPixmap * genderpix = new QPixmap();
    QGraphicsScene * genderscene = new QGraphicsScene();
    Genders::genders thegender = calcpkmgender(temppkm);
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
            setpkmgender(temppkm,(int)calcpkmgender(temppkm));
            updategenderpic();
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
        if(redisplayok)
        {
            if((arg1-1) != ui->cbPKMSpecies->currentIndex())
            {
                ui->cbPKMSpecies->setCurrentIndex(arg1-1);
            }
        }
    }
}
void pkmviewer::on_txtNickname_textChanged(const QString &arg1)
{
    if((temppkm->species > 0) && ((temppkm->pid > 0) || (temppkm->checksum > 0)))
    {
        if(redisplayok)
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
void pkmviewer::on_sbHPIV_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->ivs.hp = arg1;
        updatestats();
    }
}
void pkmviewer::on_sbAtkIV_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->ivs.attack = arg1;
        updatestats();
    }
}
void pkmviewer::on_sbDefIV_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->ivs.defense = arg1;
        updatestats();
    }
}
void pkmviewer::on_sbSpAtkIV_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->ivs.spatk = arg1;
        updatestats();
    }
}
void pkmviewer::on_sbSpDefIV_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->ivs.spdef = arg1;
        updatestats();
    }
}
void pkmviewer::on_sbSpeedIV_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->ivs.speed = arg1;
        updatestats();
    }
}
void pkmviewer::on_sbHPEV_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->evs.hp = arg1;
        updatestats();
    }
}
void pkmviewer::on_sbAtkEV_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->evs.attack = arg1;
        updatestats();
    }
}
void pkmviewer::on_sbDefEV_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->evs.defense = arg1;
        updatestats();
    }
}
void pkmviewer::on_sbSpAtkEV_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->evs.spatk = arg1;
        updatestats();
    }
}
void pkmviewer::on_sbSpDefEV_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->evs.spdef = arg1;
        updatestats();
    }
}
void pkmviewer::on_sbSpeedEV_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->evs.speed = arg1;
        updatestats();
    }
}
void pkmviewer::on_cbNatures_currentIndexChanged(int index)
{
    if(redisplayok)
    {
        temppkm->nature = (Natures::natures)index;
        updatestats();
        updatestatcolors();
    }
}
void pkmviewer::on_cbMove1_currentIndexChanged(int index)
{
    if(redisplayok)
    {
        temppkm->moves[0] = (Moves::moves)index;
        updatemoveflavor();
        updatemovepp();
        updatemoveimages();
    }
}
void pkmviewer::on_cbMove2_currentIndexChanged(int index)
{
    if(redisplayok)
    {
        temppkm->moves[1] = (Moves::moves)index;
        updatemoveflavor();
        updatemovepp();
        updatemoveimages();
    }
}
void pkmviewer::on_cbMove3_currentIndexChanged(int index)
{
    if(redisplayok)
    {
        temppkm->moves[2] = (Moves::moves)index;
        updatemoveflavor();
        updatemovepp();
        updatemoveimages();
    }
}
void pkmviewer::on_cbMove4_currentIndexChanged(int index)
{
    if(redisplayok)
    {
        temppkm->moves[3] = (Moves::moves)index;
        updatemoveflavor();
        updatemovepp();
        updatemoveimages();
    }
}
void pkmviewer::on_sbMove1PPUps_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->ppup[0] = arg1;
        updatemovepp();
    }
}
void pkmviewer::on_sbMove1PP_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->pp[0] = arg1;
    }
}
void pkmviewer::on_sbMove2PPUps_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->ppup[1] = arg1;
        updatemovepp();
    }
}
void pkmviewer::on_sbMove2PP_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->pp[1] = arg1;
    }
}
void pkmviewer::on_sbMove3PPUps_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->ppup[2] = arg1;
        updatemovepp();
    }
}
void pkmviewer::on_sbMove3PP_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->pp[2] = arg1;
    }
}
void pkmviewer::on_sbMove4PPUps_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->ppup[3] = arg1;
        updatemovepp();
    }
}
void pkmviewer::on_sbMove4PP_valueChanged(int arg1)
{
    if(redisplayok)
    {
        temppkm->pp[3] = arg1;
    }
}
void pkmviewer::on_cbPKMAbility_currentIndexChanged(int index)
{
    if(redisplayok)
    {
        temppkm->ability = (Abilities::abilities)index;
        updateabilityflavor();
    }
}
