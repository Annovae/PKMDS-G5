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
//static const int LANG_ID = 9;
//static const int VERSION_GROUP = 11;
//static const int GENERATION = 5;
//static const int BUFF_SIZE = 955;

// Set theDB to be the full path of the SQLITE database (provided by Veekun)
#ifdef __linux__
static const char theDB[] = "../../SQLite Databases/veekun-pokedex.sqlite";
static const char theimgDB[] = "../../SQLite Databases/images.sqlite";
#else
static const char theDB[] = "..\\..\\SQLite Databases\\veekun-pokedex.sqlite";
static const char theimgDB[] = "..\\..\\SQLite Databases\\images.sqlite";
#endif
#ifdef PKMDS_CMAKE_USED
//#include <Visual_Studio/vs_sqlite.h>
//#include <pkmds/pkmds_sql.h>
#include <pkmds/pkmds_g5.h>
#include <Visual_Studio/vs_sqlite.h>
#include <sqlite3.h>
#else
//#include "../../Visual_Studio/vs_sqlite.h"
//#include "../pkmds/pkmds_sql.h"
#include "pkmds_g5.h"
#include "../../Visual_Studio/vs_sqlite.h"
#include "../../include/sqlite3.h"
#endif
//#include "pkmds_g5.h"
//#include "pkmds_sql.h"
//#include "../../Visual_Studio/vs_sqlite.h"
//using namespace std;
#ifndef __cplusplus_cli
extern DllExport sqlite3 *imgdatabase;
extern DllExport sqlite3_stmt *imgstatement;
void DllExport opendb(const char db_file[] = theDB);
void DllExport closedb();
void DllExport openimgdb(const char db_file[] = theimgDB);
void DllExport closeimgdb();
#endif
using namespace std;
string DllExport getastring(const ostringstream &o);
int DllExport getanint(const ostringstream &o);
string DllExport getastring(const string &str);
int DllExport getanint(const string &str);
void DllExport dostatement(const string &cmd);
struct ivtest{
	byte id;
	byte val;
	byte order;
};
int DllExport getpkmlevel(const int id, const int exp);
int DllExport getpkmlevel(const pokemon_obj &pkm);
int DllExport getpkmlevel(const pokemon_obj *pkm);
int DllExport getpkmexptonext(const int id, const int exp);
int DllExport getpkmexptonext(const pokemon_obj &pkm);
int DllExport getpkmexptonext(const pokemon_obj *pkm);
int DllExport getpkmexpatcur(const int id, const int exp);
int DllExport getpkmexpatcur(const pokemon_obj &pkm);
int DllExport getpkmexpatcur(const pokemon_obj *pkm);
int DllExport getnatureincrease(const int natureid);
int DllExport getnatureincrease(const pokemon_obj &pkm);
int DllExport getnatureincrease(const pokemon_obj *pkm);
int DllExport getnaturedecrease(const int natureid);
int DllExport getnaturedecrease(const pokemon_obj &pkm);
int DllExport getnaturedecrease(const pokemon_obj *pkm);
int DllExport getpkmstat(const pokemon_obj &pkm, const Stat_IDs::stat_ids stat_id);
int DllExport getpkmstat(const pokemon_obj *pkm, const Stat_IDs::stat_ids stat_id);
bool DllExport pkmhasgenddiff(const int species);
bool DllExport pkmhasgenddiff(const pokemon_obj &pkm);
bool DllExport pkmhasgenddiff(const pokemon_obj *pkm);
int DllExport lookuppkmcolorid(const int species);
int DllExport lookuppkmcolorid(const pokemon_obj &pkm);
int DllExport lookuppkmcolorid(const pokemon_obj *pkm);
bool DllExport compareivbyval(const ivtest &a, const ivtest &b);
bool DllExport compareivbyid(const ivtest &a, const ivtest &b);
bool DllExport compareivbyorder(const ivtest &a, const ivtest &b);
void DllExport setlevel(pokemon_obj &pkm, int level);
void DllExport setlevel(pokemon_obj *pkm, int level);
int DllExport lookuppkmtype(const int species, const int form, const int slot, const int langid = LANG_ID);
int DllExport lookuppkmtype(const pokemon_obj &pkm, const int slot, const int langid = LANG_ID);
int DllExport lookuppkmtype(const pokemon_obj *pkm, const int slot, const int langid = LANG_ID);
int DllExport lookuppkmevolvedspecies(int speciesid);
void DllExport pctoparty(party_pkm *ppkm, const pokemon_obj *pkm);
void DllExport pctoparty(party_pkm &ppkm, const pokemon_obj *pkm);
void DllExport pctoparty(party_pkm *ppkm, const pokemon_obj &pkm);
void DllExport pctoparty(party_pkm &ppkm, const pokemon_obj &pkm);
//void DllExport displaypkminconsole(pokemon_obj * pkm);
uint32 DllExport getpkmexpatlevel(const int id, const int level);
uint32 DllExport getpkmexpatlevel(const Species::pkmspecies id, const int level);
int DllExport getmovepp(const Moves::moves moveid);
int DllExport getmovepp(const pokemon_obj * pkm, const int movenum);
int DllExport getmovetotalpp(const pokemon_obj * pkm, const int movenum);
Genders::genders DllExport calcpkmgender(const pokemon_obj * pkm);
int DllExport getpkmgenderrate(Species::pkmspecies speciesid);
Genders::genders DllExport calcpkmgender(const pokemon_obj & pkm);
int DllExport getmovecategory(const Moves::moves moveid);
Types::types DllExport getmovetype(Moves::moves moveid);
int DllExport getmovepower(const Moves::moves moveid);
int DllExport getmoveaccuracy(const Moves::moves moveid);
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
string DllExport getnaturename(const int natureid, const int langid = LANG_ID);
string DllExport getnaturename(const pokemon_obj &pkm, const int langid = LANG_ID);
string DllExport getnaturename(const pokemon_obj *pkm, const int langid = LANG_ID);
string DllExport lookupitemname(const int itemid, const int generation = GENERATION, const int langid = LANG_ID);
string DllExport lookupitemname(const pokemon_obj &pkm, const int generation = GENERATION, const int langid = LANG_ID);
string DllExport lookupitemname(const pokemon_obj *pkm, const int generation = GENERATION, const int langid = LANG_ID);
string DllExport getpkmgendername(const pokemon_obj &pkm);
string DllExport getpkmgendername(const pokemon_obj *pkm);
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
string DllExport lookupabilityflavortext(const int abilityid, const int version_group = VERSION_GROUP, const int langid = LANG_ID);
string DllExport lookupabilityflavortext(const pokemon_obj &pkm, const int version_group = VERSION_GROUP, const int langid = LANG_ID);
string DllExport lookupabilityflavortext(const pokemon_obj *pkm, const int version_group = VERSION_GROUP, const int langid = LANG_ID);
string DllExport lookupcharacteristic(const int statid, const int iv, const int langid = LANG_ID);
string DllExport lookupcharacteristic(const pokemon_obj &pkm, const int langid = LANG_ID);
string DllExport lookupcharacteristic(const pokemon_obj *pkm, const int langid = LANG_ID);
string DllExport lookuptypename(const Types::types type, const int langid = LANG_ID);
string DllExport lookuptypename(const int type, const int langid = LANG_ID);
#ifdef __cplusplus_cli
//namespace StringConversion
//{
//	//VS_SQLite ^ vsqlite = gcnew VS_SQLite;
//	//System::String ^ SSfromSTDS(std::string in);
//	System::String ^ SSfromSTD(const char * in);
//}
//System::String ^ lookuppkmnameSS(const int speciesid, const int langid = LANG_ID);
//System::String ^ lookuppkmnameSS(const pokemon_obj &pkm, const int langid = LANG_ID);
//System::String ^ lookuppkmnameSS(const pokemon_obj *pkm, const int langid = LANG_ID);
//System::String ^ lookupmovenameSS(const int moveid, const int langid = LANG_ID);
//System::String ^ lookupmovenameSS(const pokemon_obj &pkm, const int movenum, const int langid = LANG_ID);
//System::String ^ lookupmovenameSS(const pokemon_obj *pkm, const int movenum, const int langid = LANG_ID);
//System::String ^ lookupmoveflavortextSS(const uint16 moveid, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
//System::String ^ lookupmoveflavortextSS(const pokemon_obj &pkm, const int movenum, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
//System::String ^ lookupmoveflavortextSS(const pokemon_obj *pkm, const int movenum, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
//System::String ^ lookupmovetypenameSS(const uint16 moveid, const int langid = LANG_ID);
//System::String ^ lookupmovetypenameSS(const pokemon_obj &pkm, const int movenum, const int langid=LANG_ID);
//System::String ^ lookupmovetypenameSS(const pokemon_obj *pkm, const int movenum, const int langid=LANG_ID);
//System::String ^ lookupmovedamagetypenameSS(const uint16 moveid, const int langid = LANG_ID);
//System::String ^ lookupmovedamagetypenameSS(const pokemon_obj &pkm, const int movenum, const int langid = LANG_ID);
//System::String ^ lookupmovedamagetypenameSS(const pokemon_obj *pkm, const int movenum, const int langid = LANG_ID);
//System::String ^ getnaturenameSS(const int natureid, const int langid = LANG_ID);
//System::String ^ getnaturenameSS(const pokemon_obj &pkm, const int langid = LANG_ID);
//System::String ^ getnaturenameSS(const pokemon_obj *pkm, const int langid = LANG_ID);
//System::String ^ lookupitemnameSS(const int itemid, const int generation = GENERATION, const int langid = LANG_ID);
//System::String ^ lookupitemnameSS(const pokemon_obj &pkm, const int generation = GENERATION, const int langid = LANG_ID);
//System::String ^ lookupitemnameSS(const pokemon_obj *pkm, const int generation = GENERATION, const int langid = LANG_ID);
//System::String ^ getpkmgendernameSS(const pokemon_obj &pkm);
//System::String ^ getpkmgendernameSS(const pokemon_obj *pkm);
//System::String ^ lookupabilitynameSS(const int abilityid, const int langid = LANG_ID);
//System::String ^ lookupabilitynameSS(const pokemon_obj &pkm, const int langid = LANG_ID);
//System::String ^ lookupabilitynameSS(const pokemon_obj *pkm, const int langid = LANG_ID);
//System::String ^ getpkmformnameSS(const pokemon_obj &pkm, const int langid = LANG_ID);
//System::String ^ getpkmformnameSS(const pokemon_obj *pkm, const int langid = LANG_ID);
//System::String ^ lookuplocnameSS(const int locid, const int gen = GENERATION, const int langid = LANG_ID);
//System::String ^ getpkmmetlocnameSS(const pokemon_obj &pkm, const int gen = GENERATION, const int langid = LANG_ID);
//System::String ^ getpkmmetlocnameSS(const pokemon_obj *pkm, const int gen = GENERATION, const int langid = LANG_ID);
//System::String ^ getpkmegglocnameSS(const pokemon_obj &pkm, const int gen = GENERATION, const int langid = LANG_ID);
//System::String ^ getpkmegglocnameSS(const pokemon_obj *pkm, const int gen = GENERATION, const int langid = LANG_ID);
//System::String ^ lookupitemflavortextSS(const int itemid, const int generation = GENERATION, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
//System::String ^ lookupitemflavortextSS(const pokemon_obj &pkm, const int generation = GENERATION, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
//System::String ^ lookupitemflavortextSS(const pokemon_obj *pkm, const int generation = GENERATION, const int langid = LANG_ID, const int versiongroup = VERSION_GROUP);
//System::String ^ lookuppkmcolornameSS(const int species, const int langid = LANG_ID);
//System::String ^ lookuppkmcolornameSS(const pokemon_obj &pkm, const int langid = LANG_ID);
//System::String ^ lookuppkmcolornameSS(const pokemon_obj *pkm, const int langid = LANG_ID);
//System::String ^ lookupabilityflavortextSS(const int abilityid, const int version_group = VERSION_GROUP, const int langid = LANG_ID);
//System::String ^ lookupabilityflavortextSS(const pokemon_obj &pkm, const int version_group = VERSION_GROUP, const int langid = LANG_ID);
//System::String ^ lookupabilityflavortextSS(const pokemon_obj *pkm, const int version_group = VERSION_GROUP, const int langid = LANG_ID);
//System::String ^ lookupcharacteristicSS(const int statid, const int iv, const int langid = LANG_ID);
//System::String ^ lookupcharacteristicSS(const pokemon_obj &pkm, const int langid = LANG_ID);
//System::String ^ lookupcharacteristicSS(const pokemon_obj *pkm, const int langid = LANG_ID);
//System::String ^ lookuptypenameSS(const int type, const int langid = LANG_ID);
#endif
