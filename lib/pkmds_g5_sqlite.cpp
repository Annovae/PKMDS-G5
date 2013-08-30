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
#ifdef PKMDS_CMAKE_USED
//#include <pkmds/pkmds_g5_sqlite.h>
#include <pkmds/pkmds_sql.h>
#else
//#include "../../PKMDS-G5/include/pkmds/pkmds_g5_sqlite.h"
#include "../../PKMDS-G5/include/pkmds/pkmds_sql.h"
#endif
//#include "../../PKMDS-G5/include/pkmds/pkmds_sql.h"
using namespace std;
#ifndef __cplusplus_cli
sqlite3 *database;
sqlite3_stmt *statement;
void opendb(const char db_file[])
{
    sqlite3_open(db_file, &database);
}
void closedb()
{
    sqlite3_close(database);
}
sqlite3 *imgdatabase;
sqlite3_stmt *imgstatement;
void openimgdb(const char db_file[])
{
    sqlite3_open(db_file, &imgdatabase);
}
void closeimgdb()
{
    sqlite3_close(imgdatabase);
}
string getastring(const ostringstream &o)
{
    string s = "";
    char cmd[BUFF_SIZE];
#if defined(__linux__)
    strcpy(cmd,o.str().c_str());
#else
    strcpy_s(cmd,o.str().c_str());
#endif
    if(sqlite3_prepare_v2(database,cmd,-1,&statement,0) == SQLITE_OK)
    {
        int cols = sqlite3_column_count(statement);
        int result = 0;
        result = sqlite3_step(statement);
        if(result == SQLITE_ROW)
        {
            for(int col = 0; col < cols; col++)
            {
                const unsigned char* test;
                test = sqlite3_column_text(statement, col);
                if(sqlite3_column_text(statement, col) != 0)
                {
                    s = (char*)test;
                }
            }
        }
        sqlite3_finalize(statement);
    }
    return s;
}
int getanint(const ostringstream &o)
{
    int i = 0;
    char cmd[BUFF_SIZE];
#if defined(__linux__)
    strcpy(cmd,o.str().c_str());
#else
    strcpy_s(cmd,o.str().c_str());
#endif
    if(sqlite3_prepare_v2(database,cmd,-1,&statement,0) == SQLITE_OK)
    {
        int cols = sqlite3_column_count(statement);
        int result = 0;
        result = sqlite3_step(statement);
        if(result == SQLITE_ROW)
        {
            for(int col = 0; col < cols; col++)
            {
                i = sqlite3_column_int(statement, col);
            }
        }
        sqlite3_finalize(statement);
    }
    return i;
}
string getastring(const string &str)
{

    string test = str;

    string s = "";
    char cmd[BUFF_SIZE];
#if defined(__linux__)
    strcpy(cmd,str.c_str());
#else
    strcpy_s(cmd,str.c_str());
#endif
    if(sqlite3_prepare_v2(database,cmd,-1,&statement,0) == SQLITE_OK)
    {
        int cols = sqlite3_column_count(statement);
        int result = 0;
        result = sqlite3_step(statement);
        if(result == SQLITE_ROW)
        {
            for(int col = 0; col < cols; col++)
            {
                const unsigned char* test;
                test = sqlite3_column_text(statement, col);
                if(sqlite3_column_text(statement, col) != 0)
                {
                    s = (char*)test;
                }
            }
        }
        sqlite3_finalize(statement);
    }
    return s;
}
int getanint(const string &str)
{
    int i = 0;
    char cmd[BUFF_SIZE];
#if defined(__linux__)
    strcpy(cmd,str.c_str());
#else
    strcpy_s(cmd,str.c_str());
#endif
    if(sqlite3_prepare_v2(database,cmd,-1,&statement,0) == SQLITE_OK)
    {
        int cols = sqlite3_column_count(statement);
        int result = 0;
        result = sqlite3_step(statement);
        if(result == SQLITE_ROW)
        {
            for(int col = 0; col < cols; col++)
            {
                i = sqlite3_column_int(statement, col);
            }
        }
        sqlite3_finalize(statement);
    }
    return i;
}
void dostatement(const string &cmd)
{
    sqlite3_prepare_v2(database,cmd.c_str(),-1,&statement,0);
    sqlite3_step(statement);
}
#else
//#include "../../PKMDS-G5/Visual_Studio/vs_sqlite.h"
string getastring(const ostringstream &o)
{
	VS_SQLite ^ vsqlite = gcnew VS_SQLite();
	return vsqlite->getSQLTextstd(o.str());
	//free(vsqlite);
}
int getanint(const ostringstream &o)
{
	VS_SQLite ^ vsqlite = gcnew VS_SQLite();
	return vsqlite->getSQLInt(o.str());
	//free(vsqlite);
}
string getastring(const string &str)
{
	VS_SQLite ^ vsqlite = gcnew VS_SQLite();
	return vsqlite->getSQLTextstd(str);
	//free(vsqlite);
}
int getanint(const string &str)
{
	VS_SQLite ^ vsqlite = gcnew VS_SQLite();
	return vsqlite->getSQLInt(str);
	//free(vsqlite);
}
void DllExport dostatement(const string &cmd)
{}
#endif
int getpkmlevel(const int id, const int exp)
{
    return getanint(getpkmlevelsql(id,exp));
}
int getpkmlevel(const pokemon_obj &pkm)
{
    return getpkmlevel(pkm.species,pkm.exp);
}
int getpkmlevel(const pokemon_obj *pkm)
{
    return getpkmlevel(int(pkm->species),pkm->exp);
}
int getpkmexptonext(const int id, const int exp)
{
    if(getpkmlevel(id,exp) == 100)
    {
        return 0;
    };
    int expatnext = getanint(getpkmexptonextsql(id,exp));
    return expatnext - exp;
}
int getpkmexptonext(const pokemon_obj &pkm)
{
    return getpkmexptonext(pkm.species, pkm.exp);
}
int getpkmexpatcur(const int id, const int exp)
{
    return getanint(getpkmexpatcursql(id,exp));
}
uint32 getpkmexpatlevel(const int id, const int level)
{
    return getanint(getpkmexpatlevelsql(id,level));
}
uint32 getpkmexpatlevel(const Species::pkmspecies id, const int level)
{
    return getanint(getpkmexpatlevelsql(id,level));
}
int getpkmexpatcur(const pokemon_obj &pkm)
{
    return getpkmexpatcur(pkm.species,pkm.exp);
}
int getnatureincrease(const int natureid)
{
    return getanint(getnatureincreasesql(natureid));
}
int getnatureincrease(const pokemon_obj &pkm)
{
    if(int(pkm.nature) == 0 && int(pkm.hometown) != int(Hometowns::black) && int(pkm.hometown) != int(Hometowns::white))
    {
        return getnatureincrease(pkm.pid % 25);
    }
    else
    {
        return getnatureincrease(int(pkm.nature));
    }
}
int getnatureincrease(const pokemon_obj *pkm)
{
    if(int(pkm->nature) == 0 && int(pkm->hometown) != int(Hometowns::black) && int(pkm->hometown) != int(Hometowns::white))
    {
        return getnatureincrease(pkm->pid % 25);
    }
    else
    {
        return getnatureincrease(int(pkm->nature));
    }
}
int getnaturedecrease(const int natureid)
{
    return getanint(getnaturedecreasesql(natureid));
}
int getnaturedecrease(const pokemon_obj &pkm)
{
    if(int(pkm.nature) == 0 && int(pkm.hometown) != int(Hometowns::black) && int(pkm.hometown) != int(Hometowns::white))
    {
        return getnaturedecrease(pkm.pid % 25);
    }
    else
    {
        return getnaturedecrease(int(pkm.nature));
    }
}
int getnaturedecrease(const pokemon_obj *pkm)
{
    if(int(pkm->nature) == 0 && int(pkm->hometown) != int(Hometowns::black) && int(pkm->hometown) != int(Hometowns::white))
    {
        return getnaturedecrease(pkm->pid % 25);
    }
    else
    {
        return getnaturedecrease(int(pkm->nature));
    }
}
int getpkmstat(const pokemon_obj &pkm, const Stat_IDs::stat_ids stat_id)
{
    int basestat = 0;
    basestat = getanint(getpkmstatsql(pkm,stat_id));
    int level = getpkmlevel(pkm);
    int iv = 0;
    int ev = 0;
    switch(stat_id)
    {
    case Stat_IDs::hp:
        iv = pkm.ivs.hp;
        ev = pkm.evs.hp;
        return (int)((floor((double)(floor((double)(((iv + (2 * basestat) + floor((double)(ev/4))+100) * level) / 100)) + 10))));
        break;
    case Stat_IDs::attack:
        iv = pkm.ivs.attack;
        ev = pkm.evs.attack;
        break;
    case Stat_IDs::defense:
        iv = pkm.ivs.defense;
        ev = pkm.evs.defense;
        break;
    case Stat_IDs::spatk:
        iv = pkm.ivs.spatk;
        ev = pkm.evs.spatk;
        break;
    case Stat_IDs::spdef:
        iv = pkm.ivs.spdef;
        ev = pkm.evs.spdef;
        break;
    case Stat_IDs::speed:
        iv = pkm.ivs.speed;
        ev = pkm.evs.speed;
        break;
    };
    double naturemod = 1.0;
    if (getnatureincrease(pkm) != getnaturedecrease(pkm)) {
        if (int(stat_id) == getnatureincrease(pkm)){
            naturemod = 1.1;
        };
        if (int(stat_id) == getnaturedecrease(pkm)){
            naturemod = 0.9;
        };
    };
    return (int)((floor((double)(floor((double)(((iv + (2 * basestat) + floor((double)(ev/4))) * level) / 100)) + 5)) * naturemod));
    return 0;
}
int getpkmstat(const pokemon_obj *pkm, const Stat_IDs::stat_ids stat_id)
{
    int basestat = 0;
    basestat = getanint(getpkmstatsql(pkm,stat_id));
    int level = getpkmlevel(pkm);
    int iv = 0;
    int ev = 0;
    switch(stat_id)
    {
    case Stat_IDs::hp:
        iv = pkm->ivs.hp;
        ev = pkm->evs.hp;
        return (int)((floor((double)(floor((double)(((iv + (2 * basestat) + floor((double)(ev/4))+100) * level) / 100)) + 10))));
        break;
    case Stat_IDs::attack:
        iv = pkm->ivs.attack;
        ev = pkm->evs.attack;
        break;
    case Stat_IDs::defense:
        iv = pkm->ivs.defense;
        ev = pkm->evs.defense;
        break;
    case Stat_IDs::spatk:
        iv = pkm->ivs.spatk;
        ev = pkm->evs.spatk;
        break;
    case Stat_IDs::spdef:
        iv = pkm->ivs.spdef;
        ev = pkm->evs.spdef;
        break;
    case Stat_IDs::speed:
        iv = pkm->ivs.speed;
        ev = pkm->evs.speed;
        break;
    };
    double naturemod = 1.0;
    if (getnatureincrease(pkm) != getnaturedecrease(pkm)) {
        if (int(stat_id) == getnatureincrease(pkm)){
            naturemod = 1.1;
        };
        if (int(stat_id) == getnaturedecrease(pkm)){
            naturemod = 0.9;
        };
    };
    return (int)((floor((double)(floor((double)(((iv + (2 * basestat) + floor((double)(ev/4))) * level) / 100)) + 5)) * naturemod));
    return 0;
}
bool pkmhasgenddiff(const int species)
{
    int h = getanint(pkmhasgenddiffsql(species));
    return (h == 1);
}
bool pkmhasgenddiff(const pokemon_obj &pkm)
{
    return pkmhasgenddiff(pkm.species);
}
int lookuppkmcolorid(const int species)
{
    return getanint(lookuppkmcoloridsql(species));
}
int lookuppkmcolorid(const pokemon_obj &pkm)
{
    return lookuppkmcolorid(pkm.species);
}
bool compareivbyval(const ivtest &a, const ivtest &b)
{
    return a.val > b.val;
}
bool compareivbyid(const ivtest &a, const ivtest &b)
{
    return a.id < b.id;
}
bool compareivbyorder(const ivtest &a, const ivtest &b)
{
    return a.order < b.order;
}
int lookuppkmtype(const int species, const int form, const int slot, const int langid)
{
    ostringstream o;
    o << ""
      << "SELECT pokemon_types.type_id "
      << "FROM   pokemon_types "
      << "       INNER JOIN pokemon_forms "
      << "               ON pokemon_types.pokemon_id = pokemon_forms.pokemon_id "
      << "       INNER JOIN pokemon "
      << "               ON pokemon_types.pokemon_id = pokemon.id "
      << "                  AND pokemon_forms.pokemon_id = pokemon.id "
      << "       INNER JOIN pokemon_species "
      << "               ON pokemon.species_id = pokemon_species.id "
      << "       INNER JOIN pokemon_species_names "
      << "               ON pokemon_species.id = pokemon_species_names.pokemon_species_id "
      << "WHERE  ( pokemon_species_names.local_language_id = " << langid << " ) "
      << "       AND ( pokemon_forms.form_order = " << form << " + 1 ) "
      << "       AND ( pokemon_species.id = " << species << " ) "
      << "       AND ( pokemon_types.slot = " << slot << " ) ";
    return getanint(o) - 1;
}
int lookuppkmtype(const pokemon_obj &pkm, const int slot, const int langid)
{
    return lookuppkmtype(pkm.species,pkm.forms.form,slot,langid);
}
void setlevel(pokemon_obj &pkm, int level)
{
    pkm.exp = getanint(getsetlevelsql(pkm,level));
}
int getpkmexptonext(const pokemon_obj *pkm)
{
    return getpkmexptonext(int(pkm->species), pkm->exp);
}
int getpkmexpatcur(const pokemon_obj *pkm)
{
    return getpkmexpatcur(int(pkm->species),pkm->exp);
}
bool pkmhasgenddiff(const pokemon_obj *pkm)
{
    return pkmhasgenddiff(int(pkm->species));
}
int lookuppkmcolorid(const pokemon_obj *pkm)
{
    return lookuppkmcolorid(int(pkm->species));
}
void setlevel(pokemon_obj *pkm, int level)
{
    pkm->exp = getanint(getsetlevelsql(pkm,level));
}
int lookuppkmtype(const pokemon_obj *pkm, const int slot, const int langid)
{
    return lookuppkmtype(int(pkm->species),pkm->forms.form,slot,langid);
}
int lookuppkmevolvedspecies(int speciesid)
{
    return getanint(lookuppkmevolvedspeciessql(speciesid));
}
void pctoparty(party_pkm *ppkm, const pokemon_obj *pkm)
{
    ppkm->pkm_data = *pkm;
    ppkm->party_data.maxhp = getpkmstat(pkm,Stat_IDs::hp);
    ppkm->party_data.hp = ppkm->party_data.maxhp;
    ppkm->party_data.attack = getpkmstat(pkm,Stat_IDs::attack);
    ppkm->party_data.defense = getpkmstat(pkm,Stat_IDs::defense);
    ppkm->party_data.speed = getpkmstat(pkm,Stat_IDs::speed);
    ppkm->party_data.spatk = getpkmstat(pkm,Stat_IDs::spatk);
    ppkm->party_data.spdef = getpkmstat(pkm,Stat_IDs::spdef);
    ppkm->party_data.level = getpkmlevel(pkm);
}
void pctoparty(party_pkm &ppkm, const pokemon_obj *pkm)
{
    ppkm.pkm_data = *pkm;
    ppkm.party_data.maxhp = getpkmstat(pkm,Stat_IDs::hp);
    ppkm.party_data.hp = ppkm.party_data.maxhp;
    ppkm.party_data.attack = getpkmstat(pkm,Stat_IDs::attack);
    ppkm.party_data.defense = getpkmstat(pkm,Stat_IDs::defense);
    ppkm.party_data.speed = getpkmstat(pkm,Stat_IDs::speed);
    ppkm.party_data.spatk = getpkmstat(pkm,Stat_IDs::spatk);
    ppkm.party_data.spdef = getpkmstat(pkm,Stat_IDs::spdef);
    ppkm.party_data.level = getpkmlevel(pkm);
}
void pctoparty(party_pkm *ppkm, const pokemon_obj &pkm)
{
    ppkm->pkm_data = pkm;
    ppkm->party_data.maxhp = getpkmstat(pkm,Stat_IDs::hp);
    ppkm->party_data.hp = ppkm->party_data.maxhp;
    ppkm->party_data.attack = getpkmstat(pkm,Stat_IDs::attack);
    ppkm->party_data.defense = getpkmstat(pkm,Stat_IDs::defense);
    ppkm->party_data.speed = getpkmstat(pkm,Stat_IDs::speed);
    ppkm->party_data.spatk = getpkmstat(pkm,Stat_IDs::spatk);
    ppkm->party_data.spdef = getpkmstat(pkm,Stat_IDs::spdef);
    ppkm->party_data.level = getpkmlevel(pkm);
}
void pctoparty(party_pkm &ppkm, const pokemon_obj &pkm)
{
    ppkm.pkm_data = pkm;
    ppkm.party_data.maxhp = getpkmstat(pkm,Stat_IDs::hp);
    ppkm.party_data.hp = ppkm.party_data.maxhp;
    ppkm.party_data.attack = getpkmstat(pkm,Stat_IDs::attack);
    ppkm.party_data.defense = getpkmstat(pkm,Stat_IDs::defense);
    ppkm.party_data.speed = getpkmstat(pkm,Stat_IDs::speed);
    ppkm.party_data.spatk = getpkmstat(pkm,Stat_IDs::spatk);
    ppkm.party_data.spdef = getpkmstat(pkm,Stat_IDs::spdef);
    ppkm.party_data.level = getpkmlevel(pkm);
}
//void displaypkminconsole(pokemon_obj * pkm)
//{
//    cin.ignore();
//    string linebreak = "\n==========================\n";
//    cout << endl;
//    if(int(pkm->species) <= 0 || int(pkm->species) > 649)
//    {
//        cout << "This is not a valid Pokemon!" << endl;
//    }
//    else
//    {
//#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
//        system("cls");
//#else
//        system("clear");
//#endif
//        // Basic Information
//        cout << "Basic Information" << linebreak;
//        cout << "Pokemon species: " << lookuppkmname(pkm) << endl;
//        cout << "Level: " << getpkmlevel(pkm) << endl;
//        cout << "Gender: " << getpkmgendername(pkm) << endl;
//        cout << "Held item: ";
//        if(pkm->item == Items::NOTHING)
//        {
//            cout << "None" << endl;
//        }
//        else
//        {
//            cout << lookupitemname(pkm) << endl;
//        }
//        cout << "Type: " << lookuptypename(lookuppkmtype(pkm,1));
//        if(lookuppkmtype(pkm,2) != -1)
//        {
//            cout << "/" << lookuptypename(lookuppkmtype(pkm,2)) << endl;
//        }
//        else
//        {
//            cout << endl;
//        }
//        // Moves and Ability
//        cout << "\nMoves and Ability" << linebreak;
//        cout << "Move[s]:" << endl;
//        for(int i = 0; i < 4; i++)
//        {
//            if(pkm->moves[i] != Moves::NOTHING)
//            {
//                cout << lookupmovename(pkm,i) << endl;
//            }
//        }
//        cout << "Ability: " << lookupabilityname(pkm) << endl;
//        // Stats
//        cout << "\nStats" << linebreak;
//        cout << "Nature: " << getnaturename(pkm) << endl;
//        cout << "IVs: " << endl;
//        cout << "HP: " << (int)(pkm->ivs.hp) << endl;
//        cout << "Attack: " << (int)(pkm->ivs.attack) << endl;
//        cout << "Defense: " << (int)(pkm->ivs.defense) << endl;
//        cout << "Special Attack: " << (int)(pkm->ivs.spatk) << endl;
//        cout << "Special Defense: " << (int)(pkm->ivs.spdef) << endl;
//        cout << "Speed: " << (int)(pkm->ivs.speed) << endl;
//        cout << "EVs: " << endl;
//        cout << "HP: " << (int)(pkm->evs.hp) << endl;
//        cout << "Attack: " << (int)(pkm->evs.attack) << endl;
//        cout << "Defense: " << (int)(pkm->evs.defense) << endl;
//        cout << "Special Attack: " << (int)(pkm->evs.spatk) << endl;
//        cout << "Special Defense: " << (int)(pkm->evs.spdef) << endl;
//        cout << "Speed: " << (int)(pkm->evs.speed) << endl;
//        cout << "Stats: " << endl;
//        cout << "HP: " << getpkmstat(pkm,Stat_IDs::hp) << endl;
//        cout << "Attack: " << getpkmstat(pkm,Stat_IDs::attack) << endl;
//        cout << "Defense: " << getpkmstat(pkm,Stat_IDs::defense) << endl;
//        cout << "Special Attack: " << getpkmstat(pkm,Stat_IDs::spatk) << endl;
//        cout << "Special Defense: " << getpkmstat(pkm,Stat_IDs::spdef) << endl;
//        cout << "Speed: " << getpkmstat(pkm,Stat_IDs::speed) << endl;
//        if(pkm->ivs.isegg)
//        {
//            cout << "This is an egg." << endl;
//            cout << "Steps to hatch: " << getpkmhatchsteps(pkm) << endl;
//        }
//        else
//        {
//            cout << "Tameness: " << (int)((getpkmhappiness(pkm)) * 100) << "%" << endl;
//        }
//        // Origins
//        cout << "\nOrigins:" << linebreak;
//        cout << "Ball: ";
//        if(pkm->ball == Balls::pokeball || pkm->ball == Balls::pokeball_)
//        {
//            cout << "Poke Ball" << endl;
//        }
//        else
//        {
//            cout << ballnames[pkm->ball] << endl;
//        }
//        cout << "Met date (Y/M/D): " << (int)(pkm->metdate.year + 2000) << "/" << (int)(pkm->metdate.month) << "/" << (int)(pkm->metdate.day) << endl;
//        cout << "Met location: " << getpkmmetlocname(pkm) << endl;
//        if(pkm->eggmet != Locations::mysteryzone_)
//        {
//            cout << "Egg date (Y/M/D): " << (int)(pkm->eggdate.year + 2000) << "/" << (int)(pkm->eggdate.month) << "/" << (int)(pkm->eggdate.day) << endl;
//            cout << "Egg location: " << getpkmegglocname(pkm) << endl;
//        }
//        cout << "Fateful encounter: ";
//        if(pkm->forms.fencounter)
//        {
//            cout << "Yes" << endl;
//        }
//        else
//        {
//            cout << "No" << endl;
//        }
//        cout << "Shiny: ";
//        if(getpkmshiny(pkm))
//        {
//            cout << "Yes" << endl;
//        }
//        else
//        {
//            cout << "No" << endl;
//        }
//        cout << "Infected with PokeRus: ";
//        if(pkm->pkrs.strain != 0)
//        {
//            cout << "Yes" << endl;
//        }
//        else
//        {
//            cout << "No" << endl;
//        }
//    }
//    cout << endl;
//}
int getmovepp(const Moves::moves moveid)
{
    return getanint(getmoveppsql(moveid));
}
int getmovepp(const pokemon_obj * pkm, const int movenum)
{
    return getmovepp(pkm->moves[movenum]);
}
int getmovetotalpp(const pokemon_obj * pkm, const int movenum)
{
    int curpp = getmovepp(pkm,movenum);
    double multiplier = pkm->ppup[movenum] * 20;
    multiplier = (multiplier + 100) / 100;
    return (int)(curpp * multiplier);
}
int getpkmgenderrate(Species::pkmspecies speciesid)
{
    ostringstream o;
    o << ""
      << "SELECT gender_rate "
      << "FROM   pokemon_species "
      << "WHERE  ( id = " << (int)speciesid << " ) ";    return getanint(o);
}
Genders::genders calcpkmgender(const pokemon_obj * pkm)
{
    int genderrate = getpkmgenderrate(pkm->species);
    int ratiobin = 0;
    switch(genderrate)
    {
    case -1:
        return Genders::genderless;
        break;
    case 0:
        return Genders::male;
        break;
    case 1:
        ratiobin = 31;
        break;
    case 2:
        ratiobin = 63;
        break;
    case 4:
        ratiobin = 127;
        break;
    case 6:
        ratiobin = 191;
        break;
    case 8:
        return Genders::female;
        break;
    default:
        return Genders::male;
        break;
    }
    int pidbin = (pkm->pid) % 256;
    if(pidbin >= ratiobin)
    {
        return Genders::male;
    }
    return Genders::female;
}
Genders::genders calcpkmgender(const pokemon_obj & pkm)
{
    int genderrate = getpkmgenderrate(pkm.species);
    int ratiobin = 0;
    switch(genderrate)
    {
    case -1:
        return Genders::genderless;
        break;
    case 0:
        return Genders::male;
        break;
    case 1:
        ratiobin = 31;
        break;
    case 2:
        ratiobin = 63;
        break;
    case 4:
        ratiobin = 127;
        break;
    case 6:
        ratiobin = 191;
        break;
    case 8:
        return Genders::female;
        break;
    default:
        return Genders::male;
        break;
    }
    int pidbin = (pkm.pid) % 256;
    if(pidbin >= ratiobin)
    {
        return Genders::male;
    }
    return Genders::female;
}
int getmovecategory(const Moves::moves moveid)
{
    ostringstream o;
    o << ""
      << "SELECT damage_class_id "
      << "FROM   moves "
      << "WHERE  ( id = " << (int)moveid << " ) ";
    return getanint(o);
}
int getmovepower(const Moves::moves moveid)
{
    ostringstream o;
    o << ""
      << "SELECT power "
      << "FROM   moves "
      << "WHERE  ( id = " << (int)moveid << " ) ";
    return getanint(o);
}
int getmoveaccuracy(const Moves::moves moveid)
{
    ostringstream o;
    o << ""
      << "SELECT accuracy "
      << "FROM   moves "
      << "WHERE  ( id = " << (int)moveid << " ) ";
    return getanint(o);
}
Types::types getmovetype(Moves::moves moveid)
{
    ostringstream o;
    o << ""
      << "SELECT type_id "
      << "FROM   moves "
      << "WHERE  ( id = " << (int)moveid << " ) ";
    return (Types::types)(getanint(o)-1);
}
string lookuptypename(const Types::types type, const int langid)
{
    return getastring(lookuptypenamesql((int)type,langid));
}
string lookuptypename(const int type, const int langid)
{
    return getastring(lookuptypenamesql(type,langid));
}
string lookupmoveflavortext(const uint16 moveid, const int langid, const int versiongroup)
{
    string ret = getastring(getmoveflavortextsql(moveid,langid,versiongroup));
    replace(ret.begin(),ret.end(),'\n',' ');
    return ret;
}
string lookupmoveflavortext(const pokemon_obj &pkm, const int movenum, const int langid, const int versiongroup)
{
    return lookupmoveflavortext((uint16)pkm.moves[movenum],langid,versiongroup);
}
string lookupmoveflavortext(const pokemon_obj *pkm, const int movenum, const int langid, const int versiongroup)
{
    return lookupmoveflavortext((uint16)pkm->moves[movenum],langid,versiongroup);
}

string lookupabilityflavortext(const pokemon_obj *pkm, const int version_group, const int langid)
{
    return getastring(lookupabilityflavortext(pkm->ability,version_group,langid));
}

string lookupabilityflavortext(const int abilityid, const int version_group, const int langid)
{
    string ret = getastring(lookupabilityflavortextsql(abilityid,version_group,langid));
    replace(ret.begin(),ret.end(),'\n',' ');
    return ret;
}
string lookupabilityflavortext(const pokemon_obj &pkm, const int version_group, const int langid)
{
    return getastring(lookupabilityflavortext(pkm.ability,version_group,langid));
}


string lookupcharacteristic(const int statid, const int iv, const int langid)
{
    return getastring(lookupcharacteristicsql(statid,iv,langid));
}
string lookupcharacteristic(const pokemon_obj &pkm, const int langid)
{
        int statid = 0;
        int highval = 0;
        ivtest ivbuf = {};
        vector<ivtest> ivs;
        ivbuf.id = Stat_IDs::hp;
        ivbuf.val = pkm.ivs.hp;
        ivbuf.order = 0;
        ivs.push_back(ivbuf);
        ivbuf.id = Stat_IDs::attack;
        ivbuf.val = pkm.ivs.attack;
        ivbuf.order = 1;
        ivs.push_back(ivbuf);
        ivbuf.id = Stat_IDs::defense;
        ivbuf.val = pkm.ivs.defense;
        ivbuf.order = 2;
        ivs.push_back(ivbuf);
        ivbuf.id = Stat_IDs::speed;
        ivbuf.val = pkm.ivs.speed;
        ivbuf.order = 3;
        ivs.push_back(ivbuf);
        ivbuf.id = Stat_IDs::spatk;
        ivbuf.val = pkm.ivs.spatk;
        ivbuf.order = 4;
        ivs.push_back(ivbuf);
        ivbuf.id = Stat_IDs::spdef;
        ivbuf.val = pkm.ivs.spdef;
        ivbuf.order = 5;
        ivs.push_back(ivbuf);
        sort(ivs.begin(),ivs.end(),compareivbyval);
        highval = ivs[0].val;
        sort(ivs.begin(),ivs.end(),compareivbyorder);
        int highcount = 0;
        for(int i=0;i<6;i++)
        {
            if(ivs[i].val == highval)
            {
                statid = i+1;
                highcount++;
            }
        }
        if(highcount == 1)
        {
            return lookupcharacteristic(statid,highval,langid);
        }
        int startindex = pkm.pid % 6;

        for(int i=0; i<6; i++)
        {
            if(ivs[startindex].val == highval)
            {
                return lookupcharacteristic(ivs[startindex].id,highval,langid);
            }
            startindex++;
            if(startindex ==6)
            {
                startindex = 0;
            }
        }
        return lookupcharacteristic(statid,highval,langid);
}
string lookupcharacteristic(const pokemon_obj *pkm, const int langid)
{
    int statid = 0;
    int highval = 0;
    ivtest ivbuf = {};
    vector<ivtest> ivs;
    ivbuf.id = Stat_IDs::hp;
    ivbuf.val = pkm->ivs.hp;
    ivbuf.order = 0;
    ivs.push_back(ivbuf);
    ivbuf.id = Stat_IDs::attack;
    ivbuf.val = pkm->ivs.attack;
    ivbuf.order = 1;
    ivs.push_back(ivbuf);
    ivbuf.id = Stat_IDs::defense;
    ivbuf.val = pkm->ivs.defense;
    ivbuf.order = 2;
    ivs.push_back(ivbuf);
    ivbuf.id = Stat_IDs::speed;
    ivbuf.val = pkm->ivs.speed;
    ivbuf.order = 3;
    ivs.push_back(ivbuf);
    ivbuf.id = Stat_IDs::spatk;
    ivbuf.val = pkm->ivs.spatk;
    ivbuf.order = 4;
    ivs.push_back(ivbuf);
    ivbuf.id = Stat_IDs::spdef;
    ivbuf.val = pkm->ivs.spdef;
    ivbuf.order = 5;
    ivs.push_back(ivbuf);
    sort(ivs.begin(),ivs.end(),compareivbyval);
    highval = ivs[0].val;
    sort(ivs.begin(),ivs.end(),compareivbyorder);
    int highcount = 0;
    for(int i=0;i<6;i++)
    {
        if(ivs[i].val == highval)
        {
            statid = i+1;
            highcount++;
        }
    }
    if(highcount == 1)
    {
        return lookupcharacteristic(statid,highval,langid);
    }
    int startindex = pkm->pid % 6;

    for(int i=0; i<6; i++)
    {
        if(ivs[startindex].val == highval)
        {
            return lookupcharacteristic(ivs[startindex].id,highval,langid);
        }
        startindex++;
        if(startindex ==6)
        {
            startindex = 0;
        }
    }
    return lookupcharacteristic(statid,highval,langid);
}
string lookuppkmname(const int speciesid, const int langid)
{
    return getastring(getspeciesnamesql(speciesid,langid));
}
string lookuppkmname(const pokemon_obj &pkm, const int langid)
{
    return getastring(getspeciesnamesql(pkm.species,langid));
}
string lookuppkmname(const pokemon_obj *pkm, const int langid)
{
    return getastring(getspeciesnamesql(pkm->species,langid));
}
string lookupmovename(const int moveid, const int langid)
{
    return getastring(getmovenamesql(moveid,langid));
}
string lookupmovename(const pokemon_obj &pkm, const int movenum, const int langid)
{
    return getastring(getmovenamesql(pkm.moves[movenum],langid));
}
string lookupmovename(const pokemon_obj *pkm, const int movenum, const int langid)
{
    return getastring(getmovenamesql(pkm->moves[movenum],langid));
}
string getnaturename(const int natureid, const int langid)
{
    return getastring(getnaturenamesql(natureid,langid));
}
string getnaturename(const pokemon_obj &pkm, const int langid)
{
    if(int(pkm.nature) == 0 && int(pkm.hometown) != int(Hometowns::black) && int(pkm.hometown) != int(Hometowns::white))
    {
        return getastring(getnaturenamesql(pkm.pid % 25,langid));
    }
    else
    {
        return getastring(getnaturenamesql(int(pkm.nature),langid));
    }
}
string getnaturename(const pokemon_obj *pkm, const int langid)
{
    if(int(pkm->nature) == 0 && int(pkm->hometown) != int(Hometowns::black) && int(pkm->hometown) != int(Hometowns::white))
    {
        return getastring(getnaturenamesql(pkm->pid % 25,langid));
    }
    else
    {
        return getastring(getnaturenamesql(int(pkm->nature),langid));
    }
}
string lookupitemname(const int itemid, const int generation, const int langid)
{
    return getastring(lookupitemnamesql(itemid,generation,langid));
}
string lookupitemname(const pokemon_obj &pkm, const int generation, const int langid)
{
    return getastring(lookupitemnamesql(pkm.item,generation,langid));
}
string lookupitemname(const pokemon_obj *pkm, const int generation, const int langid)
{
    return getastring(lookupitemnamesql(pkm->item,generation,langid));
}
string lookupabilityname(const int abilityid, const int langid)
{
    return getastring(lookupabilitynamesql(abilityid,langid));
}
string lookupabilityname(const pokemon_obj &pkm, const int langid)
{
    return getastring(lookupabilitynamesql(pkm.ability,langid));
}
string lookupabilityname(const pokemon_obj *pkm, const int langid)
{
    return getastring(lookupabilitynamesql(pkm->ability,langid));
}
string getpkmgendername(const pokemon_obj &pkm)
{
	return getgendername(getpkmgender(pkm));
}
string getpkmgendername(const pokemon_obj *pkm)
{
	return getgendername(getpkmgender(pkm));
}
string getpkmmetlocname(const pokemon_obj &pkm, const int gen, const int langid)
{
	return lookuplocname(pkm.met,gen,langid);
}
string getpkmmetlocname(const pokemon_obj *pkm, const int gen, const int langid)
{
	return lookuplocname(pkm->met,gen,langid);
}
string getpkmegglocname(const pokemon_obj &pkm, const int gen, const int langid)
{
	return lookuplocname(pkm.eggmet,gen,langid);
}
string getpkmegglocname(const pokemon_obj *pkm, const int gen, const int langid)
{
	return lookuplocname(pkm->eggmet,gen,langid);
}
string lookuplocname(const int locid, const int gen, const int langid)
{
	return getastring(lookuplocnamesql(locid,gen,langid));
}
#ifdef __cplusplus_cli
//namespace StringConversion
//{
//	//System::String ^ SSfromSTDS(std::string in)
//	//{
//	//	try
//	//	{
//	//		System::String ^ out = gcnew System::String(in.c_str());
//	//		return out;
//	//	}
//	//	catch(...)
//	//	{
//	//		return "";
//	//	}
//	//}
//	System::String ^ SSfromSTD(const char * in)
//	{
//		try
//		{
//			System::String ^ out = gcnew System::String(in);
//			return out;
//		}
//		catch(...)
//		{
//			return "";
//		}
//	}
//}
//System::String ^ lookuppkmnameSS(const int speciesid, const int langid)
//{
//    return StringConversion::SSfromSTDS(getastring(getspeciesnamesql(speciesid,langid)));
//}
//System::String ^ lookuppkmnameSS(const pokemon_obj &pkm, const int langid)
//{
//    return StringConversion::SSfromSTDS(lookuppkmname(pkm.species,langid));
//}
//System::String ^ lookuppkmnameSS(const pokemon_obj *pkm, const int langid)
//{
    //return StringConversion::SSfromSTDS(lookuppkmname(int(pkm->species),langid));
//}
//System::String ^ lookupmovenameSS(const int moveid, const int langid)
//{
//    return StringConversion::SSfromSTDS(getastring(getmovenamesql(moveid,langid)));
//}
//System::String ^ lookupmovenameSS(const pokemon_obj &pkm, const int movenum, const int langid)
//{
//    return StringConversion::SSfromSTDS(lookupmovename(pkm.moves[movenum],langid));
//}
//System::String ^ lookupmovenameSS(const pokemon_obj *pkm, const int movenum, const int langid)
//{
//    return StringConversion::SSfromSTDS(lookupmovename(pkm->moves[movenum],langid));
//}
//System::String ^ lookupmoveflavortextSS(const uint16 moveid, const int langid, const int versiongroup)
//{
//    string ret = getastring(getmoveflavortextsql(moveid,langid,versiongroup));
//    replace(ret.begin(),ret.end(),'\n',' ');
//    return StringConversion::SSfromSTDS(ret);
//}
//System::String ^ lookupmoveflavortextSS(const pokemon_obj &pkm, const int movenum, const int langid, const int versiongroup)
//{
//    return StringConversion::SSfromSTDS(lookupmoveflavortext(pkm.moves[movenum],langid,versiongroup));
//}
//System::String ^ lookupmoveflavortextSS(const pokemon_obj *pkm, const int movenum, const int langid, const int versiongroup)
//{
//    return StringConversion::SSfromSTDS(lookupmoveflavortext(pkm->moves[movenum],langid,versiongroup));
//}
//System::String ^ lookupmovetypenameSS(const uint16 moveid, const int langid)
//{
//    return StringConversion::SSfromSTDS(getastring(getmovetypenamesql(moveid,langid)));
//}
//System::String ^ lookupmovetypenameSS(const pokemon_obj &pkm, const int movenum, const int langid)
//{
//    return StringConversion::SSfromSTDS(lookupmovetypename(pkm.moves[movenum],langid));
//}
//System::String ^ lookupmovetypenameSS(const pokemon_obj *pkm, const int movenum, const int langid)
//{
//    return StringConversion::SSfromSTDS(lookupmovetypename(pkm->moves[movenum],langid));
//}
//System::String ^ lookupmovedamagetypenameSS(const uint16 moveid, const int langid)
//{
//    return StringConversion::SSfromSTDS(getastring(getmovedamagetypenamesql(moveid,langid)));
//}
//System::String ^ lookupmovedamagetypenameSS(const pokemon_obj &pkm, const int movenum, const int langid)
//{
//    return StringConversion::SSfromSTDS(lookupmovedamagetypename(pkm.moves[movenum],langid));
//}
//System::String ^ lookupnaturenameSS(const pokemon_obj *pkm, const int langid)
//{
//    if(int(pkm->nature) == 0 && int(pkm->hometown) != int(Hometowns::black) && int(pkm->hometown) != int(Hometowns::white))
//    {
//        return StringConversion::SSfromSTDS(getnaturename(pkm->pid % 25,langid));
//    }
//    else
//    {
//        return StringConversion::SSfromSTDS(getnaturename(int(pkm->nature),langid));
//    }
//}
//System::String ^ lookupitemnameSS(const pokemon_obj *pkm, const int generation, const int langid)
//{
//    return StringConversion::SSfromSTDS(lookupitemname(pkm->item,generation,langid));
//}
//System::String ^ lookuppkmgendernameSS(const pokemon_obj *pkm)
//{
//    return StringConversion::SSfromSTDS(getgendername(calcpkmgender(pkm)));
//}
//System::String ^ lookupabilitynameSS(const pokemon_obj *pkm, const int langid)
//{
//    return StringConversion::SSfromSTDS(lookupabilityname(pkm->ability, langid));
//}
//System::String ^ lookuppkmformnameSS(const pokemon_obj *pkm, const int langid)
//{
//    return StringConversion::SSfromSTDS(getastring(getpkmformnamesql(pkm,langid)));
//}
//System::String ^ lookuppkmmetlocnameSS(const pokemon_obj *pkm, const int gen, const int langid)
//{
//    switch(pkm->met)
//    {
//    case Locations::poketransfer:
//        return "Poke Transfer Lab";
//        break;
//    case Locations::daycarecouple:
//        return "Day-Care Couple";
//        break;
//    default:
//        return StringConversion::SSfromSTDS(lookuplocname(pkm->met, gen, langid));
//    }
//}
//System::String ^ lookuppkmegglocnameSS(const pokemon_obj *pkm, const int gen, const int langid)
//{
//    switch(pkm->eggmet)
//    {
//    case Locations::poketransfer:
//        return "Poke Transfer Lab";
//        break;
//    case Locations::daycarecouple:
//        return "Day-Care Couple";
//        break;
//    default:
//        return StringConversion::SSfromSTDS(lookuplocname(pkm->eggmet, gen, langid));
//    }
//}
//System::String ^ lookupitemflavortextSS(const pokemon_obj *pkm, const int generation, const int langid, const int versiongroup)
//{
//    return StringConversion::SSfromSTDS(lookupitemflavortext(pkm->item,generation,langid,versiongroup));
//}
//System::String ^ lookuppkmcolornameSS(const pokemon_obj *pkm, const int langid)
//{
//    return StringConversion::SSfromSTDS(lookuppkmcolorname(int(pkm->species), langid));
//}
//System::String ^ lookupabilityflavortextSS(const pokemon_obj *pkm, const int version_group, const int langid)
//{
//    return StringConversion::SSfromSTDS(lookupabilityflavortext(pkm->ability,version_group,langid));
//}
//System::String ^ lookupcharacteristicSS(const pokemon_obj *pkm, const int langid)
//{
//    int statid = 0;
//    int highval = 0;
//    ivtest ivbuf = {};
//    vector<ivtest> ivs;
//    ivbuf.id = Stat_IDs::hp;
//    ivbuf.val = pkm->ivs.hp;
//    ivbuf.order = 0;
//    ivs.push_back(ivbuf);
//    ivbuf.id = Stat_IDs::attack;
//    ivbuf.val = pkm->ivs.attack;
//    ivbuf.order = 1;
//    ivs.push_back(ivbuf);
//    ivbuf.id = Stat_IDs::defense;
//    ivbuf.val = pkm->ivs.defense;
//    ivbuf.order = 2;
//    ivs.push_back(ivbuf);
//    ivbuf.id = Stat_IDs::speed;
//    ivbuf.val = pkm->ivs.speed;
//    ivbuf.order = 3;
//    ivs.push_back(ivbuf);
//    ivbuf.id = Stat_IDs::spatk;
//    ivbuf.val = pkm->ivs.spatk;
//    ivbuf.order = 4;
//    ivs.push_back(ivbuf);
//    ivbuf.id = Stat_IDs::spdef;
//    ivbuf.val = pkm->ivs.spdef;
//    ivbuf.order = 5;
//    ivs.push_back(ivbuf);
//    sort(ivs.begin(),ivs.end(),compareivbyval);
//    highval = ivs[0].val;
//    sort(ivs.begin(),ivs.end(),compareivbyorder);
//    int highcount = 0;
//    for(int i=0;i<6;i++)
//    {
//        if(ivs[i].val == highval)
//        {
//            statid = i+1;
//            highcount++;
//        }
//    }
//    if(highcount == 1)
//    {
//        return StringConversion::SSfromSTDS(lookupcharacteristic(statid,highval,langid));
//    }
//    int startindex = pkm->pid % 6;
//
//    for(int i=0; i<6; i++)
//    {
//        if(ivs[startindex].val == highval)
//        {
//            return StringConversion::SSfromSTDS(lookupcharacteristic(ivs[startindex].id,highval,langid));
//        }
//        startindex++;
//        if(startindex ==6)
//        {
//            startindex = 0;
//        }
//    }
//    return StringConversion::SSfromSTDS(lookupcharacteristic(statid,highval,langid));
//}
//System::String ^ lookupabilitynameSS(const int abilityid, const int langid)
//{
//    return StringConversion::SSfromSTDS(getastring(lookupabilitynamesql(abilityid,langid)));
//}
//System::String ^ lookupabilitynameSS(const pokemon_obj &pkm, const int langid)
//{
//    return StringConversion::SSfromSTDS(lookupabilityname(pkm.ability, langid));
//}
//System::String ^ lookuppkmformnameSS(const pokemon_obj &pkm, const int langid)
//{
//    return StringConversion::SSfromSTDS(getastring(getpkmformnamesql(pkm,langid)));
//}
//System::String ^ lookuplocnameSS(const int locid, const int gen, const int langid)
//{
//    return StringConversion::SSfromSTDS(getastring(lookuplocnamesql(locid,gen,langid)));
//}
//System::String ^ lookuppkmmetlocnameSS(const pokemon_obj &pkm, const int gen, const int langid)
//{
//    switch(pkm.met)
//    {
//    case Locations::poketransfer:
//        return "Poke Transfer Lab";
//        break;
//    case Locations::daycarecouple:
//        return "Day-Care Couple";
//        break;
//    default:
//        return StringConversion::SSfromSTDS(lookuplocname(pkm.met, gen, langid));
//    }
//}
//System::String ^ lookuppkmegglocnameSS(const pokemon_obj &pkm, const int gen, const int langid)
//{
//    switch(pkm.eggmet)
//    {
//    case Locations::poketransfer:
//        return "Poke Transfer Lab";
//        break;
//    case Locations::daycarecouple:
//        return "Day-Care Couple";
//        break;
//    default:
//        return StringConversion::SSfromSTDS(lookuplocname(pkm.eggmet, gen, langid));
//    }
//}
//System::String ^ lookupitemflavortextSS(const int itemid, const int generation, const int langid, const int versiongroup)
//{
//    string ret = getastring(lookupitemflavortextsql(itemid,generation,langid,versiongroup));
//    replace(ret.begin(),ret.end(),'\n',' ');
//    return StringConversion::SSfromSTDS(ret);
//}
//System::String ^ lookupitemflavortextSS(const pokemon_obj &pkm, const int generation, const int langid, const int versiongroup)
//{
//    return StringConversion::SSfromSTDS(lookupitemflavortext(pkm.item,generation,langid,versiongroup));
//}
//System::String ^ lookuppkmcolornameSS(const int species, const int langid)
//{
//    return StringConversion::SSfromSTDS(getastring(lookuppkmcolornamesql(species,langid)));
//}
//System::String ^ lookuppkmcolornameSS(const pokemon_obj &pkm, const int langid)
//{
//    return StringConversion::SSfromSTDS(lookuppkmcolorname(pkm.species, langid));
//}
//System::String ^ lookupnaturenameSS(const int natureid, const int langid)
//{
//    return StringConversion::SSfromSTDS(getastring(getnaturenamesql(natureid,langid)));
//}
//System::String ^ lookupnaturenameSS(const pokemon_obj &pkm, const int langid)
//{
//    if(int(pkm.nature) == 0 && int(pkm.hometown) != int(Hometowns::black) && int(pkm.hometown) != int(Hometowns::white))
//    {
//        return StringConversion::SSfromSTDS(getnaturename(pkm.pid % 25,langid));
//    }
//    else
//    {
//        return StringConversion::SSfromSTDS(getnaturename(int(pkm.nature),langid));
//    }
//}
//System::String ^ lookupitemnameSS(const int itemid, const int generation, const int langid)
//{
//    return StringConversion::SSfromSTDS(getastring(lookupitemnamesql(itemid,generation,langid)));
//}
//System::String ^ lookupitemnameSS(const pokemon_obj &pkm, const int generation, const int langid)
//{
//    return StringConversion::SSfromSTDS(lookupitemname(pkm.item,generation,langid));
//}
//System::String ^ lookupabilityflavortextSS(const int abilityid, const int version_group, const int langid)
//{
//    string ret = getastring(lookupabilityflavortextsql(abilityid,version_group,langid));
//    replace(ret.begin(),ret.end(),'\n',' ');
//    return StringConversion::SSfromSTDS(ret);
//}
//System::String ^ lookupabilityflavortextSS(const pokemon_obj &pkm, const int version_group, const int langid)
//{
//    return StringConversion::SSfromSTDS(lookupabilityflavortext(pkm.ability,version_group,langid));
//}
//System::String ^ lookupcharacteristicSS(const int statid, const int iv, const int langid)
//{
//    return StringConversion::SSfromSTDS(getastring(lookupcharacteristicsql(statid,iv,langid)));
//}
//System::String ^ lookuppkmgendernameSS(const pokemon_obj &pkm)
//{
//    return StringConversion::SSfromSTDS(getgendername(calcpkmgender(pkm)));
//}
//System::String ^ lookupcharacteristicSS(const pokemon_obj &pkm, const int langid)
//{
//    int statid = 0;
//    int highval = 0;
//    ivtest ivbuf = {};
//    vector<ivtest> ivs;
//    ivbuf.id = Stat_IDs::hp;
//    ivbuf.val = pkm.ivs.hp;
//    ivbuf.order = 0;
//    ivs.push_back(ivbuf);
//    ivbuf.id = Stat_IDs::attack;
//    ivbuf.val = pkm.ivs.attack;
//    ivbuf.order = 1;
//    ivs.push_back(ivbuf);
//    ivbuf.id = Stat_IDs::defense;
//    ivbuf.val = pkm.ivs.defense;
//    ivbuf.order = 2;
//    ivs.push_back(ivbuf);
//    ivbuf.id = Stat_IDs::speed;
//    ivbuf.val = pkm.ivs.speed;
//    ivbuf.order = 3;
//    ivs.push_back(ivbuf);
//    ivbuf.id = Stat_IDs::spatk;
//    ivbuf.val = pkm.ivs.spatk;
//    ivbuf.order = 4;
//    ivs.push_back(ivbuf);
//    ivbuf.id = Stat_IDs::spdef;
//    ivbuf.val = pkm.ivs.spdef;
//    ivbuf.order = 5;
//    ivs.push_back(ivbuf);
//    sort(ivs.begin(),ivs.end(),compareivbyval);
//    highval = ivs[0].val;
//    sort(ivs.begin(),ivs.end(),compareivbyorder);
//    int highcount = 0;
//    for(int i=0;i<6;i++)
//    {
//        if(ivs[i].val == highval)
//        {
//            statid = i+1;
//            highcount++;
//        }
//    }
//    if(highcount == 1)
//    {
//        return StringConversion::SSfromSTDS(lookupcharacteristic(statid,highval,langid));
//    }
//    int startindex = pkm.pid % 6;
//
//    for(int i=0; i<6; i++)
//    {
//        if(ivs[startindex].val == highval)
//        {
//            return StringConversion::SSfromSTDS(lookupcharacteristic(ivs[startindex].id,highval,langid));
//        }
//        startindex++;
//        if(startindex ==6)
//        {
//            startindex = 0;
//        }
//    }
//    return StringConversion::SSfromSTDS(lookupcharacteristic(statid,highval,langid));
//}
//System::String ^ lookuptypenameSS(const int type, const int langid)
//{
//    return StringConversion::SSfromSTDS(getastring(lookuptypenamesql(type,langid)));
//}
//System::String ^ lookupmovedamagetypenameSS(const pokemon_obj *pkm, const int movenum, const int langid)
//{
//    return StringConversion::SSfromSTDS(lookupmovedamagetypename(pkm->moves[movenum],langid));
//}
#endif
