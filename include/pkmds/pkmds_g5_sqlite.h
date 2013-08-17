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
#ifdef SQLITE_API
#include <sqlite3.h>
#endif
#include <pkmds/pkmds_g5.h>
#else
#ifdef SQLITE_API
#include "../sqlite3.h"
#endif
//#include "../sqlite3.h"
#include "pkmds_g5.h"
#endif
#ifdef SQLITE_API
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
std::string DllExport getastring(const std::ostringstream &o);
int DllExport getanint(const std::ostringstream &o);
void DllExport dostatement(const std::string &cmd);
std::string DllExport lookuppkmname(const int speciesid, const int langid = LANG_ID);
std::string DllExport lookuppkmname(const pokemon_obj &pkm, const int langid = LANG_ID);
std::string DllExport lookuppkmname(const pokemon_obj *pkm, const int langid = LANG_ID);
std::string DllExport lookupmovename(const int moveid, const int langid = LANG_ID);
std::string DllExport lookupmovename(const pokemon_obj &pkm, const int movenum, const int langid = LANG_ID);
std::string DllExport lookupmovename(const pokemon_obj *pkm, const int movenum, const int langid = LANG_ID);
std::string DllExport lookupmoveflavortext(const uint16 moveid, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
std::string DllExport lookupmoveflavortext(const pokemon_obj &pkm, const int movenum, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
std::string DllExport lookupmoveflavortext(const pokemon_obj *pkm, const int movenum, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
std::string DllExport lookupmovetypename(const uint16 moveid, const int langid = LANG_ID);
std::string DllExport lookupmovetypename(const pokemon_obj &pkm, const int movenum, const int langid=LANG_ID);
std::string DllExport lookupmovetypename(const pokemon_obj *pkm, const int movenum, const int langid=LANG_ID);
std::string DllExport lookupmovedamagetypename(const uint16 moveid, const int langid = LANG_ID);
std::string DllExport lookupmovedamagetypename(const pokemon_obj &pkm, const int movenum, const int langid = LANG_ID);
std::string DllExport lookupmovedamagetypename(const pokemon_obj *pkm, const int movenum, const int langid = LANG_ID);
int DllExport getpkmlevel(const int id, const int exp);
int DllExport getpkmlevel(const pokemon_obj &pkm);
int DllExport getpkmlevel(const pokemon_obj *pkm);
int DllExport getpkmexptonext(const int id, const int exp);
int DllExport getpkmexptonext(const pokemon_obj &pkm);
int DllExport getpkmexptonext(const pokemon_obj *pkm);
int DllExport getpkmexpatcur(const int id, const int exp);
int DllExport getpkmexpatcur(const pokemon_obj &pkm);
int DllExport getpkmexpatcur(const pokemon_obj *pkm);
std::string DllExport getnaturename(const int natureid, const int langid = LANG_ID);
std::string DllExport getnaturename(const pokemon_obj &pkm, const int langid = LANG_ID);
std::string DllExport getnaturename(const pokemon_obj *pkm, const int langid = LANG_ID);
int DllExport getnatureincrease(const int natureid);
int DllExport getnatureincrease(const pokemon_obj &pkm);
int DllExport getnatureincrease(const pokemon_obj *pkm);
int DllExport getnaturedecrease(const int natureid);
int DllExport getnaturedecrease(const pokemon_obj &pkm);
int DllExport getnaturedecrease(const pokemon_obj *pkm);
std::string DllExport lookupitemname(const int itemid, const int generation = GENERATION, const int langid = LANG_ID);
std::string DllExport lookupitemname(const pokemon_obj &pkm, const int generation = GENERATION, const int langid = LANG_ID);
std::string DllExport lookupitemname(const pokemon_obj *pkm, const int generation = GENERATION, const int langid = LANG_ID);
int DllExport getpkmstat(const pokemon_obj &pkm, const Stat_IDs::stat_ids stat_id);
int DllExport getpkmstat(const pokemon_obj *pkm, const Stat_IDs::stat_ids stat_id);
std::string DllExport getpkmgendername(const pokemon_obj &pkm);
std::string DllExport getpkmgendername(const pokemon_obj *pkm);
bool DllExport pkmhasgenddiff(const int species);
bool DllExport pkmhasgenddiff(const pokemon_obj &pkm);
bool DllExport pkmhasgenddiff(const pokemon_obj *pkm);
std::string DllExport lookupabilityname(const int abilityid, const int langid = LANG_ID);
std::string DllExport lookupabilityname(const pokemon_obj &pkm, const int langid = LANG_ID);
std::string DllExport lookupabilityname(const pokemon_obj *pkm, const int langid = LANG_ID);
std::string DllExport getpkmformname(const pokemon_obj &pkm, const int langid = LANG_ID);
std::string DllExport getpkmformname(const pokemon_obj *pkm, const int langid = LANG_ID);
std::string DllExport lookuplocname(const int locid, const int gen = GENERATION, const int langid = LANG_ID);
std::string DllExport getpkmmetlocname(const pokemon_obj &pkm, const int gen = GENERATION, const int langid = LANG_ID);
std::string DllExport getpkmmetlocname(const pokemon_obj *pkm, const int gen = GENERATION, const int langid = LANG_ID);
std::string DllExport getpkmegglocname(const pokemon_obj &pkm, const int gen = GENERATION, const int langid = LANG_ID);
std::string DllExport getpkmegglocname(const pokemon_obj *pkm, const int gen = GENERATION, const int langid = LANG_ID);
std::string DllExport lookupitemflavortext(const int itemid, const int generation = GENERATION, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
std::string DllExport lookupitemflavortext(const pokemon_obj &pkm, const int generation = GENERATION, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
std::string DllExport lookupitemflavortext(const pokemon_obj *pkm, const int generation = GENERATION, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
std::string DllExport lookuppkmcolorname(const int species, const int langid = LANG_ID);
std::string DllExport lookuppkmcolorname(const pokemon_obj &pkm, const int langid = LANG_ID);
std::string DllExport lookuppkmcolorname(const pokemon_obj *pkm, const int langid = LANG_ID);
int DllExport lookuppkmcolorid(const int species);
int DllExport lookuppkmcolorid(const pokemon_obj &pkm);
int DllExport lookuppkmcolorid(const pokemon_obj *pkm);
std::string DllExport lookupabilityflavortext(const int abilityid, const int version_group = VERSION_GROUP, const int langid = LANG_ID);
std::string DllExport lookupabilityflavortext(const pokemon_obj &pkm, const int version_group = VERSION_GROUP, const int langid = LANG_ID);
std::string DllExport lookupabilityflavortext(const pokemon_obj *pkm, const int version_group = VERSION_GROUP, const int langid = LANG_ID);
std::string DllExport lookupcharacteristic(const int statid, const int iv, const int langid = LANG_ID);
struct ivtest{
	byte id;
	byte val;
	byte order;
};
bool DllExport compareivbyval(const ivtest &a, const ivtest &b);
bool DllExport compareivbyid(const ivtest &a, const ivtest &b);
bool DllExport compareivbyorder(const ivtest &a, const ivtest &b);
std::string DllExport lookupcharacteristic(const pokemon_obj &pkm, const int langid = LANG_ID);
std::string DllExport lookupcharacteristic(const pokemon_obj *pkm, const int langid = LANG_ID);
void DllExport setlevel(pokemon_obj &pkm, int level);
void DllExport setlevel(pokemon_obj *pkm, int level);
std::string DllExport lookuptypename(const int type, const int langid = LANG_ID);
int DllExport lookuppkmtype(const int species, const int form, const int slot, const int langid = LANG_ID);
int DllExport lookuppkmtype(const pokemon_obj &pkm, const int slot, const int langid = LANG_ID);
int DllExport lookuppkmtype(const pokemon_obj *pkm, const int slot, const int langid = LANG_ID);
int DllExport lookuppkmevolvedspecies(int speciesid);
void DllExport pctoparty(party_pkm *ppkm, const pokemon_obj *pkm);
void DllExport pctoparty(party_pkm &ppkm, const pokemon_obj *pkm);
void DllExport pctoparty(party_pkm *ppkm, const pokemon_obj &pkm);
void DllExport pctoparty(party_pkm &ppkm, const pokemon_obj &pkm);
void DllExport displaypkminconsole(pokemon_obj * pkm);
void DllExport getspritesql(std::ostringstream& o, const pokemon_obj & pkm, int langid = LANG_ID);
void DllExport getspritesql(std::ostringstream& o, const pokemon_obj * pkm, int langid = LANG_ID);
void DllExport geticonsql(std::ostringstream& o, const pokemon_obj & pkm, int langid = LANG_ID);
void DllExport geticonsql(std::ostringstream& o, const pokemon_obj * pkm, int langid = LANG_ID);
void DllExport gettypesql(std::ostringstream& o, const Types::types type);
void DllExport gettypesql(std::ostringstream& o, const int type);
int DllExport getpkmexpatlevel(const int id, const int level);
int DllExport getpkmexpatlevel(const Species::pkmspecies id, const int level);
void DllExport getwallpapersql(std::ostringstream& o, const int wallpaper);
void DllExport getwallpapersql(std::ostringstream& o, const Wallpapers::wallpapers wallpaper);
void DllExport getitemsql(std::ostringstream& itemsql, const int itemid, const int generation = GENERATION);
void DllExport getmarkingsql(std::ostringstream& o, const Markings::markings mark, const bool marked);
void DllExport getballsql(std::ostringstream& o, const Balls::balls ball, const int generation = GENERATION);
int DllExport getmovepp(const Moves::moves moveid);
int DllExport getmovepp(const pokemon_obj * pkm, const int movenum);
int DllExport getmovetotalpp(const pokemon_obj * pkm, const int movenum);
Genders::genders DllExport calcpkmgender(const pokemon_obj * pkm);
int DllExport getpkmgenderrate(Species::pkmspecies speciesid);
Genders::genders DllExport calcpkmgender(const pokemon_obj & pkm);
int DllExport getmovecategory(const Moves::moves moveid);
void DllExport getmovecatsql(std::ostringstream& o, const Moves::moves moveid);
Types::types DllExport getmovetype(Moves::moves moveid);
int DllExport getmovepower(const Moves::moves moveid);
int DllExport getmoveaccuracy(const Moves::moves moveid);
#endif
