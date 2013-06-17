#ifndef PKMVIEWER_H
#define PKMVIEWER_H
#include <QDialog>
#include "qt_sqlite.h"
namespace Ui {
class pkmviewer;
}
class pkmviewer : public QDialog
{
    Q_OBJECT
public:
    void pkmviewer::setPKM(pokemon_obj * pkm_);
    void pkmviewer::setPKM(pokemon_obj & pkm_);
    void pkmviewer::setPKM(party_pkm * ppkm_);
    void pkmviewer::setPKM(party_pkm & ppkm_);
    void pkmviewer::displayPKM();
    explicit pkmviewer(QWidget *parent = 0);
    ~pkmviewer();
private:
    Ui::pkmviewer *ui;
};
#endif // PKMVIEWER_H
