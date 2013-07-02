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
#pragma once
#include "pkmds_g5.h"
bool comparebyspeciesasc(const pokemon_obj &a, const pokemon_obj &b);
void sortbyspeciesasc(std::vector<pokemon_obj>& pkm);
bool comparebygenderasc(const pokemon_obj &a, const pokemon_obj &b);
void sortbygenderasc(std::vector<pokemon_obj>& pkm);
bool comparebyformasc(const pokemon_obj &a, const pokemon_obj &b);
void sortbyformasc(std::vector<pokemon_obj>& pkm);
bool comparebyattackasc(const pokemon_obj &a, const pokemon_obj &b);
void sortbyattackasc(std::vector<pokemon_obj>& pkm);
bool comparebydefenseasc(const pokemon_obj &a, const pokemon_obj &b);
void sortbydefenseasc(std::vector<pokemon_obj>& pkm);
bool comparebyspeedasc(const pokemon_obj &a, const pokemon_obj &b);
void sortbyspeedasc(std::vector<pokemon_obj>& pkm);
bool comparebyspatkasc(const pokemon_obj &a, const pokemon_obj &b);
void sortbyspatkasc(std::vector<pokemon_obj>& pkm);
bool comparebyspdefasc(const pokemon_obj &a, const pokemon_obj &b);
void sortbyspdefasc(std::vector<pokemon_obj>& pkm);
bool comparebyhpasc(const pokemon_obj &a, const pokemon_obj &b);
void sortbyhpasc(std::vector<pokemon_obj>& pkm);
//TODO: Create a vector of pointers to pokemon_obj that can be manipulated for the purpose of inserting and deleting pokemon in the pc storage system.
std::vector<pokemon_obj> *getpcvector(bw2savblock_obj * block, const bool encrypted = true);
std::vector<pokemon_obj*> *getpcvectorp(bw2savblock_obj * block, const bool encrypted = true);
bool comparebyspeciesascp(pokemon_obj *a, pokemon_obj *b);
void sortbyspeciesascp(std::vector<pokemon_obj*>* pkm);
bool comparebygenderascp(const pokemon_obj *a, const pokemon_obj *b);
//void sortbygenderascp(std::vector<pokemon_obj>* pkm);
bool comparebyformascp(const pokemon_obj *a, const pokemon_obj *b);
//void sortbyformascp(std::vector<pokemon_obj>* pkm);
bool comparebyattackascp(const pokemon_obj *a, const pokemon_obj *b);
//void sortbyattackascp(std::vector<pokemon_obj>* pkm);
bool comparebydefenseascp(const pokemon_obj *a, const pokemon_obj *b);
//void sortbydefenseascp(std::vector<pokemon_obj>* pkm);
bool comparebyspeedascp(const pokemon_obj *a, const pokemon_obj *b);
//void sortbyspeedascp(std::vector<pokemon_obj>* pkm);
bool comparebyspatkascp(const pokemon_obj *a, const pokemon_obj *b);
//void sortbyspatkascp(std::vector<pokemon_obj>* pkm);
bool comparebyspdefascp(const pokemon_obj *a, const pokemon_obj *b);
//void sortbyspdefascp(std::vector<pokemon_obj>* pkm);
bool comparebyhpascp(const pokemon_obj *a, const pokemon_obj *b);
//void sortbyhpascp(std::vector<pokemon_obj>* pkm);
