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
#pragma once
// Set theDB to be the full path of the SQLITE database (provided by Veekun)
#ifdef __linux__
static const char theDB[] = "../../SQLite Databases/veekun-pokedex.sqlite";
static const char theimgDB[] = "../../SQLite Databases/images.sqlite";
#else
static const char theDB[] = "..\\..\\SQLite Databases\\veekun-pokedex.sqlite";
static const char theimgDB[] = "..\\..\\SQLite Databases\\images.sqlite";
#endif
#ifdef PKMDS_CMAKE_USED
#ifndef __cplusplus_cli
#include <sqlite3.h>
#endif
#include <pkmds/pkmds_g5.h>
#else
#ifndef __cplusplus_cli
#include "../sqlite3.h"
#else

#endif
#include "pkmds_g5.h"
#endif
#ifndef __cplusplus_cli
using namespace std;
static const int LANG_ID = 9;
static const int VERSION_GROUP = 11;
static const int GENERATION = 5;
static const int BUFF_SIZE = 955;
extern DllExport sqlite3 *imgdatabase;
extern DllExport sqlite3_stmt *imgstatement;
void DllExport opendb(const char db_file[] = theDB);
void DllExport closedb();
void DllExport openimgdb(const char db_file[] = theimgDB);
void DllExport closeimgdb();
string DllExport getastring(const ostringstream &o);
int DllExport getanint(const ostringstream &o);
void DllExport dostatement(const string &cmd);
string DllExport lookuppkmname(const int speciesid, const int langid = LANG_ID);
string DllExport lookuppkmname(const pokemon_obj &pkm, const int langid = LANG_ID);
string DllExport lookuppkmname(const pokemon_obj *pkm, const int langid = LANG_ID);
string DllExport lookupmovename(const int moveid, const int langid = LANG_ID);
string DllExport lookupmovename(const pokemon_obj &pkm, const int movenum, const int langid = LANG_ID);
string DllExport lookupmovename(const pokemon_obj *pkm, const int movenum, const int langid = LANG_ID);
string DllExport lookupmoveflavortext(const uint16 moveid, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
string DllExport lookupmoveflavortext(const pokemon_obj &pkm, const int movenum, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
string DllExport lookupmoveflavortext(const pokemon_obj *pkm, const int movenum, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
string DllExport lookupmovetypename(const uint16 moveid, const int langid = LANG_ID);
string DllExport lookupmovetypename(const pokemon_obj &pkm, const int movenum, const int langid=LANG_ID);
string DllExport lookupmovetypename(const pokemon_obj *pkm, const int movenum, const int langid=LANG_ID);
string DllExport lookupmovedamagetypename(const uint16 moveid, const int langid = LANG_ID);
string DllExport lookupmovedamagetypename(const pokemon_obj &pkm, const int movenum, const int langid = LANG_ID);
string DllExport lookupmovedamagetypename(const pokemon_obj *pkm, const int movenum, const int langid = LANG_ID);
int DllExport getpkmlevel(const int id, const int exp);
int DllExport getpkmlevel(const pokemon_obj &pkm);
int DllExport getpkmlevel(const pokemon_obj *pkm);
int DllExport getpkmexptonext(const int id, const int exp);
int DllExport getpkmexptonext(const pokemon_obj &pkm);
int DllExport getpkmexptonext(const pokemon_obj *pkm);
int DllExport getpkmexpatcur(const int id, const int exp);
int DllExport getpkmexpatcur(const pokemon_obj &pkm);
int DllExport getpkmexpatcur(const pokemon_obj *pkm);
string DllExport getnaturename(const int natureid, const int langid = LANG_ID);
string DllExport getnaturename(const pokemon_obj &pkm, const int langid = LANG_ID);
string DllExport getnaturename(const pokemon_obj *pkm, const int langid = LANG_ID);
int DllExport getnatureincrease(const int natureid);
int DllExport getnatureincrease(const pokemon_obj &pkm);
int DllExport getnatureincrease(const pokemon_obj *pkm);
int DllExport getnaturedecrease(const int natureid);
int DllExport getnaturedecrease(const pokemon_obj &pkm);
int DllExport getnaturedecrease(const pokemon_obj *pkm);
string DllExport lookupitemname(const int itemid, const int generation = GENERATION, const int langid = LANG_ID);
string DllExport lookupitemname(const pokemon_obj &pkm, const int generation = GENERATION, const int langid = LANG_ID);
string DllExport lookupitemname(const pokemon_obj *pkm, const int generation = GENERATION, const int langid = LANG_ID);
int DllExport getpkmstat(const pokemon_obj &pkm, const Stat_IDs::stat_ids stat_id);
int DllExport getpkmstat(const pokemon_obj *pkm, const Stat_IDs::stat_ids stat_id);
string DllExport getpkmgendername(const pokemon_obj &pkm);
string DllExport getpkmgendername(const pokemon_obj *pkm);
bool DllExport pkmhasgenddiff(const int species);
bool DllExport pkmhasgenddiff(const pokemon_obj &pkm);
bool DllExport pkmhasgenddiff(const pokemon_obj *pkm);
string DllExport lookupabilityname(const int abilityid, const int langid = LANG_ID);
string DllExport lookupabilityname(const pokemon_obj &pkm, const int langid = LANG_ID);
string DllExport lookupabilityname(const pokemon_obj *pkm, const int langid = LANG_ID);
string DllExport getpkmformname(const pokemon_obj &pkm, const int langid = LANG_ID);
string DllExport getpkmformname(const pokemon_obj *pkm, const int langid = LANG_ID);
string DllExport lookuplocname(const int locid, const int gen = GENERATION, const int langid = LANG_ID);
string DllExport getpkmmetlocname(const pokemon_obj &pkm, const int gen = GENERATION, const int langid = LANG_ID);
string DllExport getpkmmetlocname(const pokemon_obj *pkm, const int gen = GENERATION, const int langid = LANG_ID);
string DllExport getpkmegglocname(const pokemon_obj &pkm, const int gen = GENERATION, const int langid = LANG_ID);
string DllExport getpkmegglocname(const pokemon_obj *pkm, const int gen = GENERATION, const int langid = LANG_ID);
string DllExport lookupitemflavortext(const int itemid, const int generation = GENERATION, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
string DllExport lookupitemflavortext(const pokemon_obj &pkm, const int generation = GENERATION, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
string DllExport lookupitemflavortext(const pokemon_obj *pkm, const int generation = GENERATION, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
string DllExport lookuppkmcolorname(const int species, const int langid = LANG_ID);
string DllExport lookuppkmcolorname(const pokemon_obj &pkm, const int langid = LANG_ID);
string DllExport lookuppkmcolorname(const pokemon_obj *pkm, const int langid = LANG_ID);
int DllExport lookuppkmcolorid(const int species);
int DllExport lookuppkmcolorid(const pokemon_obj &pkm);
int DllExport lookuppkmcolorid(const pokemon_obj *pkm);
string DllExport lookupabilityflavortext(const int abilityid, const int version_group = VERSION_GROUP, const int langid = LANG_ID);
string DllExport lookupabilityflavortext(const pokemon_obj &pkm, const int version_group = VERSION_GROUP, const int langid = LANG_ID);
string DllExport lookupabilityflavortext(const pokemon_obj *pkm, const int version_group = VERSION_GROUP, const int langid = LANG_ID);
string DllExport lookupcharacteristic(const int statid, const int iv, const int langid = LANG_ID);
struct ivtest{
	byte id;
	byte val;
	byte order;
};
bool DllExport compareivbyval(const ivtest &a, const ivtest &b);
bool DllExport compareivbyid(const ivtest &a, const ivtest &b);
bool DllExport compareivbyorder(const ivtest &a, const ivtest &b);
string DllExport lookupcharacteristic(const pokemon_obj &pkm, const int langid = LANG_ID);
string DllExport lookupcharacteristic(const pokemon_obj *pkm, const int langid = LANG_ID);
void DllExport setlevel(pokemon_obj &pkm, int level);
void DllExport setlevel(pokemon_obj *pkm, int level);
string DllExport lookuptypename(const int type, const int langid = LANG_ID);
int DllExport lookuppkmtype(const int species, const int form, const int slot, const int langid = LANG_ID);
int DllExport lookuppkmtype(const pokemon_obj &pkm, const int slot, const int langid = LANG_ID);
int DllExport lookuppkmtype(const pokemon_obj *pkm, const int slot, const int langid = LANG_ID);
int DllExport lookuppkmevolvedspecies(int speciesid);
void DllExport pctoparty(party_pkm *ppkm, const pokemon_obj *pkm);
void DllExport pctoparty(party_pkm &ppkm, const pokemon_obj *pkm);
void DllExport pctoparty(party_pkm *ppkm, const pokemon_obj &pkm);
void DllExport pctoparty(party_pkm &ppkm, const pokemon_obj &pkm);
void DllExport displaypkminconsole(pokemon_obj * pkm);
void DllExport getspritesql(ostringstream& o, const pokemon_obj & pkm, int langid = LANG_ID);
void DllExport getspritesql(ostringstream& o, const pokemon_obj * pkm, int langid = LANG_ID);
void DllExport geticonsql(ostringstream& o, const pokemon_obj & pkm, int langid = LANG_ID);
void DllExport geticonsql(ostringstream& o, const pokemon_obj * pkm, int langid = LANG_ID);
void DllExport gettypesql(ostringstream& o, const Types::types type);
void DllExport gettypesql(ostringstream& o, const int type);
int DllExport getpkmexpatlevel(const int id, const int level);
int DllExport getpkmexpatlevel(const Species::pkmspecies id, const int level);
void DllExport getwallpapersql(ostringstream& o, const int wallpaper);
void DllExport getwallpapersql(ostringstream& o, const Wallpapers::wallpapers wallpaper);
void DllExport getitemsql(ostringstream& itemsql, const int itemid, const int generation = GENERATION);
void DllExport getmarkingsql(ostringstream& o, const Markings::markings mark, const bool marked);
void DllExport getballsql(ostringstream& o, const Balls::balls ball, const int generation = GENERATION);
int DllExport getmovepp(const Moves::moves moveid);
int DllExport getmovepp(const pokemon_obj * pkm, const int movenum);
int DllExport getmovetotalpp(const pokemon_obj * pkm, const int movenum);
Genders::genders DllExport calcpkmgender(const pokemon_obj * pkm);
int DllExport getpkmgenderrate(Species::pkmspecies speciesid);
Genders::genders DllExport calcpkmgender(const pokemon_obj & pkm);
int DllExport getmovecategory(const Moves::moves moveid);
void DllExport getmovecatsql(ostringstream& o, const Moves::moves moveid);
Types::types DllExport getmovetype(Moves::moves moveid);
int DllExport getmovepower(const Moves::moves moveid);
int DllExport getmoveaccuracy(const Moves::moves moveid);
string DllExport getspeciesnamesql(const int speciesid, const int langid = LANG_ID);
string DllExport getmovenamesql(const int moveid, const int langid = LANG_ID);
string DllExport getmoveflavortextsql(const uint16 moveid, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
string DllExport getmovetypenamesql(const uint16 moveid, const int langid = LANG_ID);
string DllExport getmovedamagetypenamesql(const uint16 moveid, const int langid = LANG_ID);
string DllExport getpkmlevelsql(const int id, const int exp);
string DllExport getpkmexptonextsql(const int id, const int exp);
string DllExport getpkmexpatcursql(const int id, const int exp);
string DllExport getpkmexpatlevelsql(const int id, const int level);

#else

#endif
