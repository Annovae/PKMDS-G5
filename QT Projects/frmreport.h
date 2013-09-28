#ifndef FRMREPORT_H
#define FRMREPORT_H

#include <QDialog>
#include <../../QT Projects/qt_sqlite.h>
#include <../../QT Projects/mouseeventeater.h>

namespace Ui {
class frmReport;
}

class frmReport : public QDialog
{
    Q_OBJECT
    
public:
    party_pkm * ppkm;
    pokemon_obj * pkm;
    sqlite3 *db;
    sqlite3_stmt *stmt;
    explicit frmReport(QWidget *parent = 0);
    ~frmReport();
#if (defined __linux__) || (defined __APPLE__)
    void getlist();
#else
    void frmReport::getlist();
#endif
private:
    Ui::frmReport *ui;

};

#endif // FRMREPORT_H
