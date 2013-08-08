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
#include "mouseeventeater.h"
#include "frmboxes.h"
#include "pkmviewer.h"
MouseEventEater::MouseEventEater(QObject *parent) :
    QObject(parent)
{
}
extern box_obj * frmCurBox;
extern int frmCurBoxNum;
int frmCurSlotNum = 0;
extern party_obj * frmParty;
pkmviewer * pview;
pokemon_obj * apkm = new pokemon_obj;
extern pokemon_obj * temppkm;
//extern void * extmarkingsgraphics;
//extern void extmarkingspix;
/*extern */void* extmarkingsscene;
extern void * theSlot;
bool ispartypkm_ = false;
bool MouseEventEater::eventFilter(QObject *obj, QEvent *event)
{
    QMouseEvent *mouseEvent;
    QString theObjName;
    int slot = 0;
    theObjName = obj->objectName();
    slot = (atoi(theObjName.right(2).toStdString().c_str()))-1;
    frmCurSlotNum = slot;
    bool todisplay = false;
    switch(event->type())
    {
    case QEvent::MouseButtonPress:
        mouseEvent = static_cast<QMouseEvent *>(event);
        switch(mouseEvent->button())
        {
        case Qt::LeftButton:
            theSlot = obj;
            switch(theObjName.toStdString()[2])
            {
            case 'B':
                apkm = &(frmCurBox->pokemon[slot]);
                ispartypkm_ = false;
                todisplay = true;
                break;
            case 'P':
                apkm = &(frmParty->pokemon[slot].pkm_data);
                ispartypkm_ = true;
                todisplay = true;
                break;
            default:
                QPixmap extmarkingspix;
                int selection = 0;
                if(theObjName.right(theObjName.length() - 2).toStdString() == "Circle"){
                    temppkm->markings.circle = !(temppkm->markings.circle);
                    selection = (int)Markings::circle;
                    extmarkingspix = getmarkingimage(Markings::circle, temppkm->markings.circle);
                }
                if(theObjName.right(theObjName.length() - 2).toStdString() == "Triangle"){
                    temppkm->markings.triangle = !(temppkm->markings.triangle);
                    selection = (int)Markings::triangle;
                    extmarkingspix = getmarkingimage(Markings::triangle, temppkm->markings.triangle);
                }
                if(theObjName.right(theObjName.length() - 2).toStdString() == "Square"){
                    temppkm->markings.square = !(temppkm->markings.square);
                    selection = (int)Markings::square;
                    extmarkingspix = getmarkingimage(Markings::square, temppkm->markings.square);
                }
                if(theObjName.right(theObjName.length() - 2).toStdString() == "Star"){
                    temppkm->markings.star = !(temppkm->markings.star);
                    selection = (int)Markings::star;
                    extmarkingspix = getmarkingimage(Markings::star, temppkm->markings.star);
                }
                if(theObjName.right(theObjName.length() - 2).toStdString() == "Diamond"){
                    temppkm->markings.diamond = !(temppkm->markings.diamond);
                    selection = (int)Markings::diamond;
                    extmarkingspix = getmarkingimage(Markings::diamond, temppkm->markings.diamond);
                }
                if(theObjName.right(theObjName.length() - 2).toStdString() == "Heart"){
                    temppkm->markings.heart = !(temppkm->markings.heart);
                    selection = (int)Markings::heart;
                    extmarkingspix = getmarkingimage(Markings::heart, temppkm->markings.heart);
                }
                QGraphicsScene * themarkingsscene = (QGraphicsScene*)extmarkingsscene;
                themarkingsscene = new QGraphicsScene();
                themarkingsscene->addPixmap(extmarkingspix);
                QGraphicsView * themarkingsgraphics = (QGraphicsView*)obj;
                themarkingsgraphics->setScene(themarkingsscene);
                break;
            }
            if((apkm->species != 0) && todisplay)
            {
                pview->setWindowTitle(QString::fromStdWString(getpkmnickname(apkm)));
                pview->setPKM(apkm,frmCurBoxNum, ispartypkm_);
                pview->displayPKM();
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
