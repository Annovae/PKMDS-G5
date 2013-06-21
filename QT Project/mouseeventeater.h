#ifndef MOUSEEVENTEATER_H
#define MOUSEEVENTEATER_H

#include <QObject>
#include <QEvent>
#include <QKeyEvent>
#include <QMouseEvent>

class MouseEventEater : public QObject
{
    Q_OBJECT
public:
    explicit MouseEventEater(QObject *parent = 0);
    
signals:
    
public slots:

protected:
    bool MouseEventEater::eventFilter(QObject *obj, QEvent *event);
};

//bool MouseEventEater::eventFilter(QObject *obj, QEvent *event)
////{
////    if (/*object == target && */event->type() == QEvent::KeyPress) {
////        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
////        if (keyEvent->key() == Qt::Key_Tab) {
////            // Special tab handling
////            return true;
////        } else
////            return false;
////    }
////    return false;
////}

//{
//    if (event->type() == QEvent::KeyPress) {
//        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
//        qDebug("Ate key press %d", keyEvent->key());
//        return true;
//    } else {
//        // standard event processing
//        return QObject::eventFilter(obj, event);
//    }
//}

#endif // MOUSEEVENTEATER_H
