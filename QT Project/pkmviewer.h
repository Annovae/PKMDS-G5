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
GatorShark, Chase, Jiggy-Ninja, Codr, Bond697, mingot, Guested,
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
    ~pkmviewer();
private slots:
    void on_cbPKMItem_currentIndexChanged(int index);

    void on_sbLevel_valueChanged(int arg1);

    void on_btnSaveChanges_clicked();

    void on_btnExportPKMFile_clicked();

    void on_cbPKMSpecies_currentIndexChanged(int index);

    void on_sbSpecies_valueChanged(int arg1);

    void on_txtNickname_textChanged(const QString &arg1);

    void on_sbEXP_valueChanged(int arg1);

    void on_rbOTMale_toggled(bool checked);

    void on_rbOTFemale_toggled(bool checked);

private:
    Ui::pkmviewer *ui;
};
#endif // PKMVIEWER_H
