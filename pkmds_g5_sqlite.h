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
#include "sqlite3.h"
#include "pkmds_g5.h"
// Set theDB to be the full path of the SQLITE database (provided by Veekun)
static const char theDB[] = "SQLite Databases\\veekun-pokedex.sqlite";
static const char theimgDB[] = "SQLite Databases\\images.sqlite";
static const int LANG_ID = 9;
static const int VERSION_GROUP = 11;
static const int GENERATION = 5;
static const int BUFF_SIZE = 955;
extern sqlite3 *imgdatabase;
extern sqlite3_stmt *imgstatement;
void opendb(const char db_file[] = theDB);
void closedb();
void openimgdb(const char db_file[] = theimgDB);
void closeimgdb();
std::string getastring(const std::ostringstream &o);
int getanint(const std::ostringstream &o);
void dostatement(const std::string &cmd);
std::string lookuppkmname(const int speciesid, const int langid = LANG_ID);
std::string lookuppkmname(const pokemon_obj &pkm, const int langid = LANG_ID);
std::string lookuppkmname(const pokemon_obj *pkm, const int langid = LANG_ID);
std::string lookupmovename(const int moveid, const int langid = LANG_ID);
std::string lookupmovename(const pokemon_obj &pkm, const int movenum, const int langid = LANG_ID);
std::string lookupmovename(const pokemon_obj *pkm, const int movenum, const int langid = LANG_ID);
std::string lookupmoveflavortext(const uint16 moveid, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
std::string lookupmoveflavortext(const pokemon_obj &pkm, const int movenum, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
std::string lookupmoveflavortext(const pokemon_obj *pkm, const int movenum, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
std::string lookupmovetypename(const uint16 moveid, const int langid = LANG_ID);
std::string lookupmovetypename(const pokemon_obj &pkm, const int movenum, const int langid=LANG_ID);
std::string lookupmovetypename(const pokemon_obj *pkm, const int movenum, const int langid=LANG_ID);
std::string lookupmovedamagetypename(const uint16 moveid, const int langid = LANG_ID);
std::string lookupmovedamagetypename(const pokemon_obj &pkm, const int movenum, const int langid = LANG_ID);
std::string lookupmovedamagetypename(const pokemon_obj *pkm, const int movenum, const int langid = LANG_ID);
int getpkmlevel(const int id, const int exp);
int getpkmlevel(const pokemon_obj &pkm);
int getpkmlevel(const pokemon_obj *pkm);
int getpkmexptonext(const int id, const int exp);
int getpkmexptonext(const pokemon_obj &pkm);
int getpkmexptonext(const pokemon_obj *pkm);
int getpkmexpatcur(const int id, const int exp);
int getpkmexpatcur(const pokemon_obj &pkm);
int getpkmexpatcur(const pokemon_obj *pkm);
std::string getnaturename(const int natureid, const int langid = LANG_ID);
std::string getnaturename(const pokemon_obj &pkm, const int langid = LANG_ID);
std::string getnaturename(const pokemon_obj *pkm, const int langid = LANG_ID);
int getnatureincrease(const int natureid);
int getnatureincrease(const pokemon_obj &pkm);
int getnatureincrease(const pokemon_obj *pkm);
int getnaturedecrease(const int natureid);
int getnaturedecrease(const pokemon_obj &pkm);
int getnaturedecrease(const pokemon_obj *pkm);
std::string lookupitemname(const int itemid, const int generation = GENERATION, const int langid = LANG_ID);
std::string lookupitemname(const pokemon_obj &pkm, const int generation = GENERATION, const int langid = LANG_ID);
std::string lookupitemname(const pokemon_obj *pkm, const int generation = GENERATION, const int langid = LANG_ID);
int getpkmstat(const pokemon_obj &pkm, const Stat_IDs::stat_ids stat_id);
int getpkmstat(const pokemon_obj *pkm, const Stat_IDs::stat_ids stat_id);
std::string getpkmgendername(const pokemon_obj &pkm);
std::string getpkmgendername(const pokemon_obj *pkm);
bool pkmhasgenddiff(const int species);
bool pkmhasgenddiff(const pokemon_obj &pkm);
bool pkmhasgenddiff(const pokemon_obj *pkm);
std::string lookupabilityname(const int abilityid, const int langid = LANG_ID);
std::string lookupabilityname(const pokemon_obj &pkm, const int langid = LANG_ID);
std::string lookupabilityname(const pokemon_obj *pkm, const int langid = LANG_ID);
std::string getpkmformname(const pokemon_obj &pkm, const int langid = LANG_ID);
std::string getpkmformname(const pokemon_obj *pkm, const int langid = LANG_ID);
std::string lookuplocname(const int locid, const int gen = GENERATION, const int langid = LANG_ID);
std::string getpkmmetlocname(const pokemon_obj &pkm, const int gen = GENERATION, const int langid = LANG_ID);
std::string getpkmmetlocname(const pokemon_obj *pkm, const int gen = GENERATION, const int langid = LANG_ID);
std::string getpkmegglocname(const pokemon_obj &pkm, const int gen = GENERATION, const int langid = LANG_ID);
std::string getpkmegglocname(const pokemon_obj *pkm, const int gen = GENERATION, const int langid = LANG_ID);
std::string lookupitemflavortext(const int itemid, const int generation = GENERATION, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
std::string lookupitemflavortext(const pokemon_obj &pkm, const int generation = GENERATION, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
std::string lookupitemflavortext(const pokemon_obj *pkm, const int generation = GENERATION, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
std::string lookuppkmcolorname(const int species, const int langid = LANG_ID);
std::string lookuppkmcolorname(const pokemon_obj &pkm, const int langid = LANG_ID);
std::string lookuppkmcolorname(const pokemon_obj *pkm, const int langid = LANG_ID);
int lookuppkmcolorid(const int species);
int lookuppkmcolorid(const pokemon_obj &pkm);
int lookuppkmcolorid(const pokemon_obj *pkm);
std::string lookupabilityflavortext(const int abilityid, const int version_group = VERSION_GROUP, const int langid = LANG_ID);
std::string lookupabilityflavortext(const pokemon_obj &pkm, const int version_group = VERSION_GROUP, const int langid = LANG_ID);
std::string lookupabilityflavortext(const pokemon_obj *pkm, const int version_group = VERSION_GROUP, const int langid = LANG_ID);
std::string lookupcharacteristic(const int statid, const int iv, const int langid = LANG_ID);
struct ivtest{
	byte id;
	byte val;
	byte order;
};
bool compareivbyval(const ivtest &a, const ivtest &b);
bool compareivbyid(const ivtest &a, const ivtest &b);
bool compareivbyorder(const ivtest &a, const ivtest &b);
std::string lookupcharacteristic(const pokemon_obj &pkm, const int langid = LANG_ID);
std::string lookupcharacteristic(const pokemon_obj *pkm, const int langid = LANG_ID);
void setlevel(pokemon_obj &pkm, int level);
void setlevel(pokemon_obj *pkm, int level);
std::string lookuptypename(const int type, const int langid = LANG_ID);
int lookuppkmtype(const int species, const int form, const int slot, const int langid = LANG_ID);
int lookuppkmtype(const pokemon_obj &pkm, const int slot, const int langid = LANG_ID);
int lookuppkmtype(const pokemon_obj *pkm, const int slot, const int langid = LANG_ID);
int lookuppkmevolvedspecies(int speciesid);
void pctoparty(party_pkm *ppkm, const pokemon_obj *pkm);
void pctoparty(party_pkm &ppkm, const pokemon_obj *pkm);
void pctoparty(party_pkm *ppkm, const pokemon_obj &pkm);
void pctoparty(party_pkm &ppkm, const pokemon_obj &pkm);
void displaypkminconsole(pokemon_obj * pkm);
std::ostringstream getspritesql(const pokemon_obj & pkm, int langid = LANG_ID);
std::ostringstream getspritesql(const pokemon_obj * pkm, int langid = LANG_ID);
std::ostringstream geticonsql(const pokemon_obj & pkm, int langid = LANG_ID);
std::ostringstream geticonsql(const pokemon_obj * pkm, int langid = LANG_ID);
std::ostringstream gettypesql(const Types::types type);
std::ostringstream gettypesql(const int type);
int getpkmexpatlevel(const int id, const int level);
int getpkmexpatlevel(const Species::pkmspecies id, const int level);
std::ostringstream getwallpapersql(const int wallpaper);
std::ostringstream getwallpapersql(const Wallpapers::wallpapers wallpaper);
std::ostringstream getitemsql(const int itemid, const int generation, const int langid = LANG_ID);
