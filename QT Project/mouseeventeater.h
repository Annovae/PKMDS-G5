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

#endif // MOUSEEVENTEATER_H
