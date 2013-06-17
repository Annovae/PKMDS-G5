#ifndef FRMBOXES_H
#define FRMBOXES_H
#include <QMainWindow>
#include "qt_sqlite.h"
namespace Ui {
class frmBoxes;
}
class frmBoxes : public QMainWindow
{
    Q_OBJECT
public:
    explicit frmBoxes(QWidget *parent = 0);
    ~frmBoxes();
private slots:
    void on_actionLoad_SAV_triggered();
    void on_cbBoxes_currentIndexChanged(int index);
    void changebox(int index);
    void on_sbBoxIncrem_valueChanged(int value);
private:
    Ui::frmBoxes *ui;
};
#endif // FRMBOXES_H
