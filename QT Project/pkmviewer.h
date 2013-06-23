/*
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
GatorShark, Jiggy-Ninja, Codr, Bond697, mingot, Guested,
coolbho3000 and of course, COM.

Some documentation available at: http://www.projectpokemon.org/wiki/
*/
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
    void pkmviewer::setPKM(party_pkm * ppkm_);
    void pkmviewer::displayPKM();
    explicit pkmviewer(QWidget *parent = 0);
    void pkmviewer::fixuppkm(pokemon_obj * pkm);
    ~pkmviewer();
private slots:
    void on_cbPKMItem_currentIndexChanged(int index);

    void on_sbLevel_valueChanged(int arg1);

    void on_btnSaveChanges_clicked();

    void on_btnExportPKMFile_clicked();

private:
    Ui::pkmviewer *ui;
};
#endif // PKMVIEWER_H
