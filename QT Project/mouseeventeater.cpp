#include "mouseeventeater.h"
#include "frmboxes.h"
#include "pkmviewer.h"

MouseEventEater::MouseEventEater(QObject *parent) :
    QObject(parent)
{
}

extern box_obj * frmCurBox;
extern party_obj * frmParty;
pkmviewer * pview;

bool MouseEventEater::eventFilter(QObject *obj, QEvent *event)
{
    QMouseEvent *mouseEvent;// = new QMouseEvent();
    QString theObjName;
    int slot = 0;
    pokemon_obj * apkm = new pokemon_obj;
    //std::string stop;
    switch(event->type())
    {
    case QEvent::MouseButtonPress:
        mouseEvent = static_cast<QMouseEvent *>(event);
        switch(mouseEvent->button())
        {
        case Qt::MouseButton::LeftButton:
            theObjName = obj->objectName();
            slot = (atoi(theObjName.right(2).toStdString().c_str()))-1;
            switch(theObjName.toStdString()[2])
            {
            case 'B':
                apkm = &(frmCurBox->pokemon[slot]);
                break;
            case 'P':
                apkm = &(frmParty->pokemon[slot].pkm_data);
                break;
            }
            if(apkm->species != 0)
            {
                pview->setPKM(apkm);
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
