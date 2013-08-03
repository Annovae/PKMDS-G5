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
#ifndef FRMBOXES_H
#define FRMBOXES_H
#include <QMainWindow>
#include <../../QT Project/qt_sqlite.h>
#include <../../QT Project/mouseeventeater.h>
namespace Ui {
class frmBoxes;
}
class frmBoxes : public QMainWindow
{
    Q_OBJECT
public:
    explicit frmBoxes(QWidget *parent = 0);
    MouseEventEater *mouseEventEater;
    QGraphicsView * partygraphics[6];
    QPixmap pix;
    QGraphicsScene* partyscenes[6];
    QGraphicsView* boxgraphics[30];
    QGraphicsScene* boxscenes[30];
    ~frmBoxes();
private slots:
    void on_actionLoad_SAV_triggered();
    void on_cbBoxes_currentIndexChanged(int index);
    void changebox(int index);
    void on_sbBoxIncrem_valueChanged(int value);
    void on_actionSave_changes_triggered();

private:
    Ui::frmBoxes *ui;
};
#endif // FRMBOXES_H
