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
        case Qt::MouseButton::LeftButton:
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
