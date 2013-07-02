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
#include "mouseeventeater.h"
#include "frmboxes.h"
#include "pkmviewer.h"

MouseEventEater::MouseEventEater(QObject *parent) :
    QObject(parent)
{
}

//extern QGraphicsView * partygraphics[6];
//extern QPixmap partypix[6];
//extern QGraphicsScene* partyscenes[6];
//extern QGraphicsView* boxgraphics[30];
//extern QPixmap boxpix[30];
//extern QGraphicsScene* boxscenes[30];

//QGraphicsView * gvPtr = new QGraphicsView;
//QPixmap * pmPtr = new QPixmap;
//QGraphicsScene * gsPtr = new QGraphicsScene;

extern box_obj * frmCurBox;
extern party_obj * frmParty;
pkmviewer * pview;
pokemon_obj * apkm = new pokemon_obj;

bool MouseEventEater::eventFilter(QObject *obj, QEvent *event)
{
    QMouseEvent *mouseEvent;// = new QMouseEvent();
    QString theObjName/*, theParentName*/;
    int slot = 0;
    //std::string stop;
    theObjName = obj->objectName();
    slot = (atoi(theObjName.right(2).toStdString().c_str()))-1;
    switch(event->type())
    {
    case QEvent::MouseButtonPress:
        //break;
        //case QEvent::MouseButtonDblClick:
        mouseEvent = static_cast<QMouseEvent *>(event);
        switch(mouseEvent->button())
        {
        case Qt::LeftButton:
            switch(theObjName.toStdString()[2])
            {
            case 'B':
                apkm = &(frmCurBox->pokemon[slot]);
//                theParentName = obj->parent()->objectName();
//                gvPtr = frmBoxes.boxgraphics[slot];
//                pmPtr = &(/*frmBoxes::*/boxpix[slot]);
//                gsPtr = (/*frmBoxes::*/boxscenes[slot]);
                break;
            case 'P':
                apkm = &(frmParty->pokemon[slot].pkm_data);
//                gvPtr = (/*frmBoxes::*/partygraphics[slot]);
//                pmPtr = &(/*frmBoxes::*/partypix[slot]);
//                gsPtr = (/*frmBoxes::*/partyscenes[slot]);
                break;
            }
            if(apkm->species != 0)
            {
                pview->setWindowTitle(QString::fromStdWString(getpkmnickname(apkm)));
                pview->setPKM(apkm);
                pview->displayPKM();
                pview->swapsprite(*apkm);
                pview->show();
            }
            break;
        default:
            break;
        }

    default:
        return QObject::eventFilter(obj, event);
        break;
    }
    return false;
}
