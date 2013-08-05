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
#include <pkmds/pkmds_g5_sqlite.h>
#else
#include "../../PKMDS-G5/include/pkmds/pkmds_g5_sqlite.h"
#endif
using namespace std;
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
string getastring(const std::ostringstream &o)
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
int getanint(const std::ostringstream &o)
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
void dostatement(const std::string &cmd)
{
    sqlite3_prepare_v2(database,cmd.c_str(),-1,&statement,0);
    sqlite3_step(statement);
}
string lookuppkmname(const int speciesid, const int langid)
{
    std::ostringstream o;
    o << "SELECT name FROM pokemon_species_names WHERE (pokemon_species_id = "
      << speciesid << " ) AND (local_language_id = " << langid << ")";
    return getastring(o);
}
string lookuppkmname(const pokemon_obj &pkm, const int langid)
{
    return lookuppkmname(pkm.species,langid);
}
string lookuppkmname(const pokemon_obj *pkm, const int langid)
{
    return lookuppkmname(pkm->species,langid);
}
string lookupmovename(const int moveid, const int langid)
{
    std::ostringstream o;
    o << "SELECT name FROM move_names WHERE (move_id = "
      << moveid << ") AND (local_language_id = "
      << langid << ")";
    return getastring(o);
}
string lookupmovename(const pokemon_obj &pkm, const int movenum, const int langid)
{
    return lookupmovename(pkm.moves[movenum],langid);
}
string lookupmovename(const pokemon_obj *pkm, const int movenum, const int langid)
{
    return lookupmovename(pkm->moves[movenum],langid);
}
string lookupmoveflavortext(const uint16 moveid, const int langid, const int versiongroup)
{
    std::ostringstream o;
    o << "SELECT move_flavor_text.flavor_text FROM moves " <<
         "INNER JOIN move_flavor_text ON moves.id = move_flavor_text.move_id WHERE" <<
         "(move_flavor_text.language_id = " << langid << ")" <<
         "AND (move_flavor_text.move_id = " << moveid << ")" <<
         "AND (move_flavor_text.version_group_id = " << versiongroup << ")";
    std::string ret = getastring(o);
    replace(ret.begin(),ret.end(),'\n',' ');
    return ret;
}
string lookupmoveflavortext(const pokemon_obj &pkm, const int movenum, const int langid, const int versiongroup)
{
    return lookupmoveflavortext(pkm.moves[movenum],langid,versiongroup);
}
string lookupmoveflavortext(const pokemon_obj *pkm, const int movenum, const int langid, const int versiongroup)
{
    return lookupmoveflavortext(pkm->moves[movenum],langid,versiongroup);
}
string lookupmovetypename(const uint16 moveid, const int langid)
{
    std::ostringstream o;
    o << "SELECT type_names.name "
      << "FROM   moves "
      << "       INNER JOIN type_names "
      << "               ON moves.type_id = type_names.type_id "
      << "       INNER JOIN types "
      << "               ON moves.type_id = types.id "
      << "                  AND type_names.type_id = types.id "
      << "WHERE  ( moves.id = " << moveid << " ) "
      << "       AND ( type_names.local_language_id = " << langid << " ) ";
    return getastring(o);
}
string lookupmovetypename(const pokemon_obj &pkm, const int movenum, const int langid)
{
    return lookupmovetypename(pkm.moves[movenum],langid);
}
string lookupmovetypename(const pokemon_obj *pkm, const int movenum, const int langid)
{
    return lookupmovetypename(pkm->moves[movenum],langid);
}
string lookupmovedamagetypename(const uint16 moveid, const int langid)
{
    std::ostringstream o;
    o << ""
      << "SELECT move_damage_class_prose.name "
      << "FROM   moves "
      << "       INNER JOIN move_damage_classes "
      << "               ON moves.damage_class_id = move_damage_classes.id "
      << "       INNER JOIN move_damage_class_prose "
      << "               ON move_damage_classes.id = "
      << "                  move_damage_class_prose.move_damage_class_id "
      << "WHERE  ( moves.id = " << moveid << " ) "
      << "       AND ( move_damage_class_prose.local_language_id = " << langid << " ) ";
    return getastring(o);
}
string lookupmovedamagetypename(const pokemon_obj &pkm, const int movenum, const int langid)
{
    return lookupmovedamagetypename(pkm.moves[movenum],langid);
}
int getpkmlevel(const int id, const int exp)
{
    std::ostringstream o;
    o << ""
      << "SELECT experience.level "
      << "FROM   experience "
      << "       INNER JOIN pokemon_species "
      << "               ON experience.growth_rate_id = pokemon_species.growth_rate_id "
      << "                  AND experience.growth_rate_id = pokemon_species.growth_rate_id "
      << "WHERE  ( experience.experience <= " << exp << " ) "
      << "       AND ( pokemon_species.id = " << id << " ) "
      << "ORDER  BY experience.experience DESC ";
    return getanint(o);
}
int getpkmlevel(const pokemon_obj &pkm)
{
    return getpkmlevel(pkm.species,pkm.exp);
}
int getpkmlevel(const pokemon_obj *pkm)
{
    return getpkmlevel(pkm->species,pkm->exp);
}
int getpkmexptonext(const int id, const int exp)
{
    if(getpkmlevel(id,exp) == 100)
    {
        return 0;
    };
    std::ostringstream o;
    o << ""
      << "SELECT experience.experience "
      << "FROM   pokemon_species "
      << "       INNER JOIN experience "
      << "               ON pokemon_species.growth_rate_id = experience.growth_rate_id "
      << "WHERE  ( pokemon_species.id = " << id << " ) "
      << "       AND ( experience.experience > " << exp << " ) "
      << "ORDER  BY experience.experience ";
    int expatnext = getanint(o);
    return expatnext - exp;
}
int getpkmexptonext(const pokemon_obj &pkm)
{
    return getpkmexptonext(pkm.species, pkm.exp);
}
int getpkmexpatcur(const int id, const int exp)
{
    std::ostringstream o;
    o << ""
      << "SELECT experience.experience "
      << "FROM   pokemon_species "
      << "       INNER JOIN experience "
      << "               ON pokemon_species.growth_rate_id = experience.growth_rate_id "
      << "WHERE  ( pokemon_species.id = " << id << " ) "
      << "       AND ( experience.level = " << getpkmlevel(id,exp) << " ) "
      << "ORDER  BY experience.experience ";
    return getanint(o);
}
int getpkmexpatlevel(const int id, const int level)
{
    std::ostringstream o;
    o << ""
      << "SELECT experience.experience "
      << "FROM   pokemon_species "
      << "       INNER JOIN experience "
      << "               ON pokemon_species.growth_rate_id = experience.growth_rate_id "
      << "WHERE  ( pokemon_species.id = " << id << " ) "
      << "       AND ( experience.level = " << level << " ) "
      << "ORDER  BY experience.experience ";
    return getanint(o);
}
int getpkmexpatlevel(const Species::pkmspecies id, const int level)
{
    std::ostringstream o;
    o << ""
      << "SELECT experience.experience "
      << "FROM   pokemon_species "
      << "       INNER JOIN experience "
      << "               ON pokemon_species.growth_rate_id = experience.growth_rate_id "
      << "WHERE  ( pokemon_species.id = " << (int)id << " ) "
      << "       AND ( experience.level = " << level << " ) "
      << "ORDER  BY experience.experience ";
    return getanint(o);
}
int getpkmexpatcur(const pokemon_obj &pkm)
{
    return getpkmexpatcur(pkm.species,pkm.exp);
}
string getnaturename(const int natureid, const int langid)
{
    std::ostringstream o;
    o << ""
      << "SELECT name "
      << "FROM   nature_names "
      << "WHERE  ( nature_id = " << (int)(natureconvert[natureid][1]) << " ) "
                                                                      << "       AND ( local_language_id = " << langid << " ) ";
    return getastring(o);
}
string getnaturename(const pokemon_obj &pkm, const int langid)
{
    if(pkm.nature == 0 && pkm.hometown != Hometowns::black && pkm.hometown != Hometowns::white)
    {
        return getnaturename(pkm.pid % 25,langid);
    }
    else
    {
        return getnaturename(pkm.nature,langid);
    }
}
int getnatureincrease(const int natureid)
{
    std::ostringstream o;
    o << ""
      << "SELECT increased_stat_id "
      << "FROM   natures "
      << "WHERE  ( id = " << (int)(natureconvert[natureid][1]) << " ) ";
    return getanint(o);
}
int getnatureincrease(const pokemon_obj &pkm)
{
    if(pkm.nature == 0 && pkm.hometown != Hometowns::black && pkm.hometown != Hometowns::white)
    {
        return getnatureincrease(pkm.pid % 25);
    }
    else
    {
        return getnatureincrease(pkm.nature);
    }
}
int getnatureincrease(const pokemon_obj *pkm)
{
    if(pkm->nature == 0 && pkm->hometown != Hometowns::black && pkm->hometown != Hometowns::white)
    {
        return getnatureincrease(pkm->pid % 25);
    }
    else
    {
        return getnatureincrease(pkm->nature);
    }
}
int getnaturedecrease(const int natureid)
{
    std::ostringstream o;
    o << ""
      << "SELECT decreased_stat_id "
      << "FROM   natures "
      << "WHERE  ( id = " << (int)(natureconvert[natureid][1]) << " ) ";
    return getanint(o);
}
int getnaturedecrease(const pokemon_obj &pkm)
{
    if(pkm.nature == 0 && pkm.hometown != Hometowns::black && pkm.hometown != Hometowns::white)
    {
        return getnaturedecrease(pkm.pid % 25);
    }
    else
    {
        return getnaturedecrease(pkm.nature);
    }
}
int getnaturedecrease(const pokemon_obj *pkm)
{
    if(pkm->nature == 0 && pkm->hometown != Hometowns::black && pkm->hometown != Hometowns::white)
    {
        return getnaturedecrease(pkm->pid % 25);
    }
    else
    {
        return getnaturedecrease(pkm->nature);
    }
}
string lookupitemname(const int itemid, const int generation, const int langid)
{
    std::ostringstream o;
    o << ""
      << "SELECT item_names.name "
      << "FROM   item_game_indices "
      << "       INNER JOIN item_names "
      << "               ON item_game_indices.item_id = item_names.item_id "
      << "WHERE  ( item_game_indices.generation_id = " << generation << " ) "
      << "       AND ( item_game_indices.game_index = " << itemid << " ) "
      << "       AND ( item_names.local_language_id = " << langid << " ) ";
    return getastring(o);
}
string lookupitemname(const pokemon_obj &pkm, const int generation, const int langid)
{
    return lookupitemname(pkm.item,generation,langid);
}
int getpkmstat(const pokemon_obj &pkm, const Stat_IDs::stat_ids stat_id)
{
    int basestat = 0;
    std::ostringstream o;
    o << ""
      << "SELECT pokemon_stats.base_stat "
      << "FROM   pokemon_stats "
      << "       INNER JOIN pokemon_forms "
      << "               ON pokemon_stats.pokemon_id = pokemon_forms.pokemon_id "
      << "       INNER JOIN stats "
      << "               ON pokemon_stats.stat_id = stats.id "
      << "       INNER JOIN stat_names "
      << "               ON stats.id = stat_names.stat_id "
      << "       INNER JOIN pokemon_species_names "
      << "               ON stat_names.local_language_id = "
      << "                  pokemon_species_names.local_language_id "
      << "       INNER JOIN pokemon "
      << "               ON pokemon_stats.pokemon_id = pokemon.id "
      << "                  AND pokemon_forms.pokemon_id = pokemon.id "
      << "                  AND pokemon_species_names.pokemon_species_id = "
      << "                      pokemon.species_id "
      << "WHERE  ( pokemon_species_names.local_language_id = 9 ) "
      << "       AND ( stat_names.local_language_id = 9 ) "
      << "       AND ( pokemon_species_names.pokemon_species_id = " << (uint16)pkm.species << " ) "
      << "       AND ( pokemon_forms.form_order = " << (int)(pkm.forms.form) << " + 1 ) "
      << "       AND ( stat_names.stat_id = " << (int)stat_id << " ) ";
    basestat = getanint(o);
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
        if (stat_id == getnatureincrease(pkm)){
            naturemod = 1.1;
        };
        if (stat_id == getnaturedecrease(pkm)){
            naturemod = 0.9;
        };
    };
    return (int)((floor((double)(floor((double)(((iv + (2 * basestat) + floor((double)(ev/4))) * level) / 100)) + 5)) * naturemod));
    return 0;
}
int getpkmstat(const pokemon_obj *pkm, const Stat_IDs::stat_ids stat_id)
{
    int basestat = 0;
    std::ostringstream o;
    o << ""
      << "SELECT pokemon_stats.base_stat "
      << "FROM   pokemon_stats "
      << "       INNER JOIN pokemon_forms "
      << "               ON pokemon_stats.pokemon_id = pokemon_forms.pokemon_id "
      << "       INNER JOIN stats "
      << "               ON pokemon_stats.stat_id = stats.id "
      << "       INNER JOIN stat_names "
      << "               ON stats.id = stat_names.stat_id "
      << "       INNER JOIN pokemon_species_names "
      << "               ON stat_names.local_language_id = "
      << "                  pokemon_species_names.local_language_id "
      << "       INNER JOIN pokemon "
      << "               ON pokemon_stats.pokemon_id = pokemon.id "
      << "                  AND pokemon_forms.pokemon_id = pokemon.id "
      << "                  AND pokemon_species_names.pokemon_species_id = "
      << "                      pokemon.species_id "
      << "WHERE  ( pokemon_species_names.local_language_id = 9 ) "
      << "       AND ( stat_names.local_language_id = 9 ) "
      << "       AND ( pokemon_species_names.pokemon_species_id = " << (uint16)pkm->species << " ) "
      << "       AND ( pokemon_forms.form_order = " << (int)(pkm->forms.form) << " + 1 ) "
      << "       AND ( stat_names.stat_id = " << (int)stat_id << " ) ";
    basestat = getanint(o);
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
        if (stat_id == getnatureincrease(pkm)){
            naturemod = 1.1;
        };
        if (stat_id == getnaturedecrease(pkm)){
            naturemod = 0.9;
        };
    };
    return (int)((floor((double)(floor((double)(((iv + (2 * basestat) + floor((double)(ev/4))) * level) / 100)) + 5)) * naturemod));
    return 0;
}
string getpkmgendername(const pokemon_obj &pkm)
{
    return getgendername(calcpkmgender(pkm));
}
bool pkmhasgenddiff(const int species)
{
    std::ostringstream o;
    o << ""
      << "SELECT has_gender_differences "
      << "FROM   pokemon_species "
      << "WHERE  ( id = " << (int)species << " ) ";
    int h = getanint(o);
    return (h == 1);
}
bool pkmhasgenddiff(const pokemon_obj &pkm)
{
    return pkmhasgenddiff(pkm.species);
}
string lookupabilityname(const int abilityid, const int langid)
{
    std::ostringstream o;
    o << ""
      << "SELECT name "
      << "FROM   ability_names "
      << "WHERE  ( local_language_id = " << langid << " ) "
      << "       AND ( ability_id = " << abilityid << " ) ";
    return getastring(o);
}
string lookupabilityname(const pokemon_obj &pkm, const int langid)
{
    return lookupabilityname(pkm.ability, langid);
}
string getpkmformname(const pokemon_obj &pkm, const int langid)
{
    std::ostringstream o;
    o << ""
      << "SELECT pokemon_form_names.form_name "
      << "FROM   pokemon_forms "
      << "       INNER JOIN pokemon_form_names "
      << "               ON pokemon_forms.id = pokemon_form_names.pokemon_form_id "
      << "       INNER JOIN pokemon "
      << "               ON pokemon_forms.pokemon_id = pokemon.id "
      << "       INNER JOIN pokemon_species "
      << "               ON pokemon.species_id = pokemon_species.id "
      << "       INNER JOIN pokemon_species_names "
      << "               ON pokemon_species.id = pokemon_species_names.pokemon_species_id "
      << "WHERE  ( pokemon_form_names.local_language_id = " << langid << " ) "
      << "       AND ( pokemon_species_names.local_language_id = " << langid << " ) "
      << "       AND ( pokemon.species_id = " << (uint16)pkm.species << " ) "
      << "       AND ( pokemon_forms.form_order = " << (int)(pkm.forms.form) << " + 1 ) ";
    return getastring(o);
}
string lookuplocname(const int locid, const int gen, const int langid)
{
    std::ostringstream o;
    o << ""
      << "SELECT location_names.name AS [Location Name] "
      << "FROM   locations "
      << "       INNER JOIN location_game_indices "
      << "               ON locations.id = location_game_indices.location_id "
      << "       INNER JOIN location_names "
      << "               ON locations.id = location_names.location_id "
      << "       INNER JOIN generations "
      << "               ON location_game_indices.generation_id = generations.id "
      << "WHERE  ( location_names.local_language_id = " << langid << " ) "
      << "       AND ( generations.id = " << gen << " ) "
      << "       AND ( location_game_indices.game_index = " << locid << " ) "
      << "ORDER  BY location_game_indices.game_index ";
    return getastring(o);
}
string getpkmmetlocname(const pokemon_obj &pkm, const int gen, const int langid)
{
    switch(pkm.met)
    {
    case Locations::poketransfer:
        return "Poke Transfer Lab";
        break;
    case Locations::daycarecouple:
        return "Day-Care Couple";
        break;
    default:
        return lookuplocname(pkm.met, gen, langid);
    }
}
string getpkmegglocname(const pokemon_obj &pkm, const int gen, const int langid)
{
    switch(pkm.eggmet)
    {
    case Locations::poketransfer:
        return "Poke Transfer Lab";
        break;
    case Locations::daycarecouple:
        return "Day-Care Couple";
        break;
    default:
        return lookuplocname(pkm.eggmet, gen, langid);
    }
}
string lookupitemflavortext(const int itemid, const int generation, const int langid, const int versiongroup)
{
    std::ostringstream o;
    o << ""
      << "SELECT item_flavor_text.flavor_text "
      << "FROM   item_flavor_text "
      << "       INNER JOIN item_game_indices "
      << "               ON item_flavor_text.item_id = item_game_indices.item_id "
      << "       INNER JOIN items "
      << "               ON item_flavor_text.item_id = items.id "
      << "                  AND item_game_indices.item_id = items.id "
      << "WHERE  ( item_flavor_text.language_id = " << langid << " ) "
      << "       AND ( item_game_indices.generation_id = " << generation << " ) "
      << "       AND ( item_game_indices.game_index = " << itemid << " ) "
      << "       AND ( item_flavor_text.version_group_id = " << versiongroup << " ) ";
    std::string ret = getastring(o);
    replace(ret.begin(),ret.end(),'\n',' ');
    return ret;
}
string lookupitemflavortext(const pokemon_obj &pkm, const int generation, const int langid, const int versiongroup)
{
    return lookupitemflavortext(pkm.item,generation,langid,versiongroup);
}
string lookuppkmcolorname(const int species, const int langid)
{
    std::ostringstream o;
    o << ""
      << "SELECT pokemon_color_names.name "
      << "FROM   pokemon_colors "
      << "       INNER JOIN pokemon_color_names "
      << "               ON pokemon_colors.id = pokemon_color_names.pokemon_color_id "
      << "       INNER JOIN pokemon_species "
      << "               ON pokemon_colors.id = pokemon_species.color_id "
      << "WHERE  ( pokemon_color_names.local_language_id = " << langid << " ) "
      << "       AND ( pokemon_species.id = " << species << " ) ";
    return getastring(o);
}
string lookuppkmcolorname(const pokemon_obj &pkm, const int langid)
{
    return lookuppkmcolorname(pkm.species, langid);
}
int lookuppkmcolorid(const int species)
{
    std::ostringstream o;
    o << ""
      << "SELECT pokemon_color_names.pokemon_color_id "
      << "FROM   pokemon_colors "
      << "       INNER JOIN pokemon_color_names "
      << "               ON pokemon_colors.id = pokemon_color_names.pokemon_color_id "
      << "       INNER JOIN pokemon_species "
      << "               ON pokemon_colors.id = pokemon_species.color_id "
      << "WHERE  ( pokemon_color_names.local_language_id = 9 ) "
      << "       AND ( pokemon_species.id = " << species << " ) ";
    return getanint(o);
}
int lookuppkmcolorid(const pokemon_obj &pkm)
{
    return lookuppkmcolorid(pkm.species);
}
string lookupabilityflavortext(const int abilityid, const int version_group, const int langid)
{
    std::ostringstream o;
    o << ""
      << "SELECT ability_flavor_text.flavor_text "
      << "FROM   abilities "
      << "       INNER JOIN ability_flavor_text "
      << "               ON abilities.id = ability_flavor_text.ability_id "
      << "       INNER JOIN languages "
      << "               ON ability_flavor_text.language_id = languages.id "
      << "WHERE  ( ability_flavor_text.version_group_id = " << version_group << " ) "
      << "       AND ( ability_flavor_text.language_id = " << langid << " ) "
      << "       AND ( abilities.id = " << abilityid << " ) ";
    std::string ret = getastring(o);
    replace(ret.begin(),ret.end(),'\n',' ');
    return ret;
}
string lookupabilityflavortext(const pokemon_obj &pkm, const int version_group, const int langid)
{
    return lookupabilityflavortext(pkm.ability,version_group,langid);
}
string lookupcharacteristic(const int statid, const int iv, const int langid)
{
    std::ostringstream o;
    o << ""
      << "SELECT stat_hint_names.message "
      << "FROM   stat_hints "
      << "       INNER JOIN stat_hint_names "
      << "               ON stat_hints.id = stat_hint_names.stat_hint_id "
      << "WHERE  ( stat_hint_names.local_language_id = " << langid << " ) "
      << "       AND ( stat_hints.stat_id = " << statid << " ) "
      << "       AND ( stat_hints.gene_mod_5 = " << (int)(iv % 5) << " ) ";
    return getastring(o);
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
    std::sort(ivs.begin(),ivs.end(),compareivbyval);
    highval = ivs[0].val;
    std::sort(ivs.begin(),ivs.end(),compareivbyorder);
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
void setlevel(pokemon_obj &pkm, int level)
{
    if(level > 100)
    {
        level = 100;
    }
    if(level < 1)
    {
        level = 1;
    }
    std::ostringstream o;
    o << ""
      << "SELECT experience.experience "
      << "FROM   pokemon_species "
      << "       INNER JOIN experience "
      << "               ON pokemon_species.growth_rate_id = experience.growth_rate_id "
      << "WHERE  ( pokemon_species.id = " << (int)(pkm.species) << " ) "
      << "       AND ( experience.level = " << level << " ) "
      << "ORDER  BY experience.experience ";
    pkm.exp = getanint(o);
}
string lookuptypename(const int type, const int langid)
{
    std::ostringstream o;
    o << ""
      << "SELECT type_names.name "
      << "FROM   types "
      << "       INNER JOIN type_names "
      << "               ON types.id = type_names.type_id "
      << "WHERE  ( type_names.local_language_id = " << langid << " ) "
      << "       AND ( types.id = " << (type+1) << " ) ";
    return getastring(o);
}
int lookuppkmtype(const int species, const int form, const int slot, const int langid)
{
    std::ostringstream o;
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
string lookupmovedamagetypename(const pokemon_obj *pkm, const int movenum, const int langid)
{
    return lookupmovedamagetypename(pkm->moves[movenum],langid);
}
int getpkmexptonext(const pokemon_obj *pkm)
{
    return getpkmexptonext(pkm->species, pkm->exp);
}
int getpkmexpatcur(const pokemon_obj *pkm)
{
    return getpkmexpatcur(pkm->species,pkm->exp);
}
string getnaturename(const pokemon_obj *pkm, const int langid)
{
    if(pkm->nature == 0 && pkm->hometown != Hometowns::black && pkm->hometown != Hometowns::white)
    {
        return getnaturename(pkm->pid % 25,langid);
    }
    else
    {
        return getnaturename(pkm->nature,langid);
    }
}
string lookupitemname(const pokemon_obj *pkm, const int generation, const int langid)
{
    return lookupitemname(pkm->item,generation,langid);
}
string getpkmgendername(const pokemon_obj *pkm)
{
    return getgendername(calcpkmgender(pkm));
}
bool pkmhasgenddiff(const pokemon_obj *pkm)
{
    return pkmhasgenddiff(pkm->species);
}
string lookupabilityname(const pokemon_obj *pkm, const int langid)
{
    return lookupabilityname(pkm->ability, langid);
}
string getpkmformname(const pokemon_obj *pkm, const int langid)
{
    std::ostringstream o;
    o << ""
      << "SELECT pokemon_form_names.form_name "
      << "FROM   pokemon_forms "
      << "       INNER JOIN pokemon_form_names "
      << "               ON pokemon_forms.id = pokemon_form_names.pokemon_form_id "
      << "       INNER JOIN pokemon "
      << "               ON pokemon_forms.pokemon_id = pokemon.id "
      << "       INNER JOIN pokemon_species "
      << "               ON pokemon.species_id = pokemon_species.id "
      << "       INNER JOIN pokemon_species_names "
      << "               ON pokemon_species.id = pokemon_species_names.pokemon_species_id "
      << "WHERE  ( pokemon_form_names.local_language_id = " << langid << " ) "
      << "       AND ( pokemon_species_names.local_language_id = " << langid << " ) "
      << "       AND ( pokemon.species_id = " << (uint16)pkm->species << " ) "
      << "       AND ( pokemon_forms.form_order = " << (int)(pkm->forms.form) << " + 1 ) ";
    return getastring(o);
}
string getpkmmetlocname(const pokemon_obj *pkm, const int gen, const int langid)
{
    switch(pkm->met)
    {
    case Locations::poketransfer:
        return "Poke Transfer Lab";
        break;
    case Locations::daycarecouple:
        return "Day-Care Couple";
        break;
    default:
        return lookuplocname(pkm->met, gen, langid);
    }
}
string getpkmegglocname(const pokemon_obj *pkm, const int gen, const int langid)
{
    switch(pkm->eggmet)
    {
    case Locations::poketransfer:
        return "Poke Transfer Lab";
        break;
    case Locations::daycarecouple:
        return "Day-Care Couple";
        break;
    default:
        return lookuplocname(pkm->eggmet, gen, langid);
    }
}
string lookupitemflavortext(const pokemon_obj *pkm, const int generation, const int langid, const int versiongroup)
{
    return lookupitemflavortext(pkm->item,generation,langid,versiongroup);
}
string lookuppkmcolorname(const pokemon_obj *pkm, const int langid)
{
    return lookuppkmcolorname(pkm->species, langid);
}
int lookuppkmcolorid(const pokemon_obj *pkm)
{
    return lookuppkmcolorid(pkm->species);
}
string lookupabilityflavortext(const pokemon_obj *pkm, const int version_group, const int langid)
{
    return lookupabilityflavortext(pkm->ability,version_group,langid);
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
    std::sort(ivs.begin(),ivs.end(),compareivbyval);
    highval = ivs[0].val;
    std::sort(ivs.begin(),ivs.end(),compareivbyorder);
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
void setlevel(pokemon_obj *pkm, int level)
{
    if(level > 100)
    {
        level = 100;
    }
    if(level < 1)
    {
        level = 1;
    }
    std::ostringstream o;
    o << ""
      << "SELECT experience.experience "
      << "FROM   pokemon_species "
      << "       INNER JOIN experience "
      << "               ON pokemon_species.growth_rate_id = experience.growth_rate_id "
      << "WHERE  ( pokemon_species.id = " << (int)(pkm->species) << " ) "
      << "       AND ( experience.level = " << level << " ) "
      << "ORDER  BY experience.experience ";
    pkm->exp = getanint(o);
}
int lookuppkmtype(const pokemon_obj *pkm, const int slot, const int langid)
{
    return lookuppkmtype(pkm->species,pkm->forms.form,slot,langid);
}
int lookuppkmevolvedspecies(int speciesid)
{
    std::ostringstream o;
    o << ""
      << "SELECT pokemon.species_id "
      << "FROM   pokemon_species "
      << "       INNER JOIN pokemon "
      << "               ON pokemon_species.id = pokemon.species_id "
      << "       INNER JOIN evolution_chains "
      << "               ON pokemon_species.evolution_chain_id = evolution_chains.id "
      << "       INNER JOIN pokemon_evolution "
      << "               ON pokemon_species.id = pokemon_evolution.evolved_species_id "
      << "WHERE  ( pokemon_species.evolves_from_species_id = " << (int)speciesid << " ) ";
    return getanint(o);
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
void displaypkminconsole(pokemon_obj * pkm)
{
    cin.ignore();
    std::string linebreak = "\n==========================\n";
    cout << endl;
    if(pkm->species <= 0 || pkm->species > 649)
    {
        cout << "This is not a valid Pokemon!" << endl;
    }
    else
    {
#if defined(_WIN32) || defined(__WIN32__) || defined(WIN32)
        system("cls");
#else
        system("clear");
#endif
        // Basic Information
        cout << "Basic Information" << linebreak;
        cout << "Pokemon species: " << lookuppkmname(pkm) << endl;
        cout << "Level: " << getpkmlevel(pkm) << endl;
        cout << "Gender: " << getpkmgendername(pkm) << endl;
        cout << "Held item: ";
        if(pkm->item == Items::NOTHING)
        {
            cout << "None" << endl;
        }
        else
        {
            cout << lookupitemname(pkm) << endl;
        }
        cout << "Type: " << lookuptypename(lookuppkmtype(pkm,1));
        if(lookuppkmtype(pkm,2) != -1)
        {
            cout << "/" << lookuptypename(lookuppkmtype(pkm,2)) << endl;
        }
        else
        {
            cout << endl;
        }
        // Moves and Ability
        cout << "\nMoves and Ability" << linebreak;
        cout << "Move[s]:" << endl;
        for(int i = 0; i < 4; i++)
        {
            if(pkm->moves[i] != Moves::NOTHING)
            {
                cout << lookupmovename(pkm,i) << endl;
            }
        }
        cout << "Ability: " << lookupabilityname(pkm) << endl;
        // Stats
        cout << "\nStats" << linebreak;
        cout << "Nature: " << getnaturename(pkm) << endl;
        cout << "IVs: " << endl;
        cout << "HP: " << (int)(pkm->ivs.hp) << endl;
        cout << "Attack: " << (int)(pkm->ivs.attack) << endl;
        cout << "Defense: " << (int)(pkm->ivs.defense) << endl;
        cout << "Special Attack: " << (int)(pkm->ivs.spatk) << endl;
        cout << "Special Defense: " << (int)(pkm->ivs.spdef) << endl;
        cout << "Speed: " << (int)(pkm->ivs.speed) << endl;
        cout << "EVs: " << endl;
        cout << "HP: " << (int)(pkm->evs.hp) << endl;
        cout << "Attack: " << (int)(pkm->evs.attack) << endl;
        cout << "Defense: " << (int)(pkm->evs.defense) << endl;
        cout << "Special Attack: " << (int)(pkm->evs.spatk) << endl;
        cout << "Special Defense: " << (int)(pkm->evs.spdef) << endl;
        cout << "Speed: " << (int)(pkm->evs.speed) << endl;
        cout << "Stats: " << endl;
        cout << "HP: " << getpkmstat(pkm,Stat_IDs::hp) << endl;
        cout << "Attack: " << getpkmstat(pkm,Stat_IDs::attack) << endl;
        cout << "Defense: " << getpkmstat(pkm,Stat_IDs::defense) << endl;
        cout << "Special Attack: " << getpkmstat(pkm,Stat_IDs::spatk) << endl;
        cout << "Special Defense: " << getpkmstat(pkm,Stat_IDs::spdef) << endl;
        cout << "Speed: " << getpkmstat(pkm,Stat_IDs::speed) << endl;
        if(pkm->ivs.isegg)
        {
            cout << "This is an egg." << endl;
            cout << "Steps to hatch: " << getpkmhatchsteps(pkm) << endl;
        }
        else
        {
            cout << "Tameness: " << (int)((getpkmhappiness(pkm)) * 100) << "%" << endl;
        }
        // Origins
        cout << "\nOrigins:" << linebreak;
        cout << "Ball: ";
        if(pkm->ball == Balls::pokeball || pkm->ball == Balls::pokeball_)
        {
            cout << "Poke Ball" << endl;
        }
        else
        {
            cout << ballnames[pkm->ball] << endl;
        }
        cout << "Met date (Y/M/D): " << (int)(pkm->metdate.year + 2000) << "/" << (int)(pkm->metdate.month) << "/" << (int)(pkm->metdate.day) << endl;
        cout << "Met location: " << getpkmmetlocname(pkm) << endl;
        if(pkm->eggmet != Locations::mysteryzone_)
        {
            cout << "Egg date (Y/M/D): " << (int)(pkm->eggdate.year + 2000) << "/" << (int)(pkm->eggdate.month) << "/" << (int)(pkm->eggdate.day) << endl;
            cout << "Egg location: " << getpkmegglocname(pkm) << endl;
        }
        cout << "Fateful encounter: ";
        if(pkm->forms.fencounter)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        cout << "Shiny: ";
        if(getpkmshiny(pkm))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        cout << "Infected with PokeRus: ";
        if(pkm->pkrs.strain != 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    cout << endl;
}
void getspritesql(ostringstream& o, const pokemon_obj & pkm, int langid)
{
    o
            << "SELECT pokemon_forms.form_identifier "
            << "FROM   pokemon_form_names "
            << "       INNER JOIN pokemon_forms "
            << "               ON pokemon_form_names.pokemon_form_id = pokemon_forms.id "
            << "       INNER JOIN pokemon "
            << "               ON pokemon_forms.pokemon_id = pokemon.id "
            << "WHERE  ( pokemon.species_id = " << (int)(pkm.species) << " ) "
            << "       AND ( pokemon_form_names.local_language_id = " << langid << " ) "
            << "       AND ( pokemon_forms.form_order = " << (int)(pkm.forms.form) << " + 1 ) ";
    std::string formid = getastring(o);
    o.str("");
    o.clear();
    o << (int)(pkm.species);
    if(formid != "")
    {
        o << "-" << formid;
    }
    formid = o.str().c_str();
    if(pkm.species == Species::keldeo)
    {
        if(pkm.forms.form == 1)
        {
            formid = "647-resolution";
        }
    }
    o.str("");
    o.clear();
    std::string tgender = "";
    if((pkmhasgenddiff(pkm) && (calcpkmgender(pkm) == Genders::female)) & (pkm.species != Species::torchic) & (pkm.species != Species::buizel) & (pkm.species != Species::floatzel))
    {
        tgender = "female";
    }
    else
    {
        tgender = "male";
    }
    std::string tshiny = "";
    if(getpkmshiny(pkm))
    {
        tshiny = "shiny";
    }
    else
    {
        tshiny = "normal";
    }
    o << "SELECT image FROM front_" << tgender << "_" << tshiny << "_sprites WHERE (identifier = '" << formid << "')";
}
void getspritesql(ostringstream& o, const pokemon_obj * pkm, int langid)
{
    o
            << "SELECT pokemon_forms.form_identifier "
            << "FROM   pokemon_form_names "
            << "       INNER JOIN pokemon_forms "
            << "               ON pokemon_form_names.pokemon_form_id = pokemon_forms.id "
            << "       INNER JOIN pokemon "
            << "               ON pokemon_forms.pokemon_id = pokemon.id "
            << "WHERE  ( pokemon.species_id = " << (int)(pkm->species) << " ) "
            << "       AND ( pokemon_form_names.local_language_id = " << langid << " ) "
            << "       AND ( pokemon_forms.form_order = " << (int)(pkm->forms.form) << " + 1 ) ";
    std::string formid = getastring(o);
    o.str("");
    o.clear();
    o << (int)(pkm->species);
    if(formid != "")
    {
        o << "-" << formid;
    }
    formid = o.str().c_str();
    if(pkm->species == Species::keldeo)
    {
        if(pkm->forms.form == 1)
        {
            formid = "647-resolution";
        }
    }
    o.str("");
    o.clear();
    std::string tgender = "";
    if((pkmhasgenddiff(pkm) && (calcpkmgender(pkm) == Genders::female)) & (pkm->species != Species::torchic) & (pkm->species != Species::buizel) & (pkm->species != Species::floatzel))
    {
        tgender = "female";
    }
    else
    {
        tgender = "male";
    }
    std::string tshiny = "";
    if(getpkmshiny(pkm))
    {
        tshiny = "shiny";
    }
    else
    {
        tshiny = "normal";
    }
    o << "SELECT image FROM front_" << tgender << "_" << tshiny << "_sprites WHERE (identifier = '" << formid << "')";
}
void geticonsql(ostringstream& o, const pokemon_obj & pkm, int langid)
{
    std::string formid;
    if(pkm.ivs.isegg)
    {
        if(pkm.species == Species::manaphy)
        {
            o << "SELECT image FROM icons_male WHERE (identifier = \"egg-manaphy\")"; // It's a Manaphy egg.
        }
        else
        {
            o << "SELECT image FROM icons_male WHERE (identifier = \"egg\")"; // It's as regular egg.
        }
    }
    else
    {
        int formint = pkm.forms.form;
        if(pkm.species == Species::arceus)
        {
            formint = 0;
        }
        o
                << "SELECT pokemon_forms.form_identifier "
                << "FROM   pokemon_form_names "
                << "       INNER JOIN pokemon_forms "
                << "               ON pokemon_form_names.pokemon_form_id = pokemon_forms.id "
                << "       INNER JOIN pokemon "
                << "               ON pokemon_forms.pokemon_id = pokemon.id "
                << "WHERE  ( pokemon.species_id = " << (int)(pkm.species) << " ) "
                << "       AND ( pokemon_form_names.local_language_id = " << langid << " ) "
                << "       AND ( pokemon_forms.form_order = " << formint << " + 1 ) ";
        formid = getastring(o);
        o.str("");
        o.clear();
        o << (int)(pkm.species);
        if(formid != "")
        {
            o << "-" << formid;
        }
        formid = o.str().c_str();
        o.str("");
        o.clear();
        std::string tgender = "";
        if(((pkm.species == 521) | (pkm.species == 592) | (pkm.species == 593)) && (calcpkmgender(pkm) == Genders::female))
        {
            tgender = "fe";
        }
        tgender += "male";
        if(pkm.species == Species::keldeo)
        {
            switch(pkm.forms.form)
            {
            case 0:
                formid = "647-regular";
                break;
            case 1:
                formid = "647-resolution";
                break;
            }
        }
        if(pkm.species == Species::kyurem && pkm.forms.form != 0)
        {
            if(pkm.forms.form == 1)
            {
                formid = "646-white";
            }
            else
            {
                formid = "646-black";
            }
        }
        o << "SELECT image FROM icons_" << tgender << " WHERE (identifier = \"" << formid << "\")";
    }
}
void geticonsql(ostringstream& o, const pokemon_obj * pkm, int langid)
{
    std::string formid;
    if(pkm->ivs.isegg)
    {
        if(pkm->species == Species::manaphy)
        {
            o << "SELECT image FROM icons_male WHERE (identifier = \"egg-manaphy\")"; // It's a Manaphy egg.
        }
        else
        {
            o << "SELECT image FROM icons_male WHERE (identifier = \"egg\")"; // It's as regular egg.
        }
    }
    else
    {
        int formint = pkm->forms.form;
        if(pkm->species == Species::arceus)
        {
            formint = 0;
        }
        o
                << "SELECT pokemon_forms.form_identifier "
                << "FROM   pokemon_form_names "
                << "       INNER JOIN pokemon_forms "
                << "               ON pokemon_form_names.pokemon_form_id = pokemon_forms.id "
                << "       INNER JOIN pokemon "
                << "               ON pokemon_forms.pokemon_id = pokemon.id "
                << "WHERE  ( pokemon.species_id = " << (int)(pkm->species) << " ) "
                << "       AND ( pokemon_form_names.local_language_id = " << langid << " ) "
                << "       AND ( pokemon_forms.form_order = " << formint << " + 1 ) ";
        formid = getastring(o);
        o.str("");
        o.clear();
        o << (int)(pkm->species);
        if(formid != "")
        {
            o << "-" << formid;
        }
        formid = o.str().c_str();
        o.str("");
        o.clear();
        std::string tgender = "";
        if(((pkm->species == 521) | (pkm->species == 592) | (pkm->species == 593)) && (calcpkmgender(pkm) == Genders::female))
        {
            tgender = "fe";
        }
        tgender += "male";
        if(pkm->species == Species::keldeo)
        {
            switch(pkm->forms.form)
            {
            case 0:
                formid = "647-regular";
                break;
            case 1:
                formid = "647-resolution";
                break;
            }
        }
        if(pkm->species == Species::kyurem && pkm->forms.form != 0)
        {
            if(pkm->forms.form == 1)
            {
                formid = "646-white";
            }
            else
            {
                formid = "646-black";
            }
        }
        o << "SELECT image FROM icons_" << tgender << " WHERE (identifier = \"" << formid << "\")";
    }
}
void gettypesql(ostringstream& o, const Types::types type)
{
    std::string type_name = lookuptypename((int)type,9);
    type_name[0] = tolower(type_name[0]);
    o << "Select image from types where (identifier = \"" << type_name << "\")";
}
void gettypesql(ostringstream& o, const int type)
{
    std::string type_name = lookuptypename(type,9);
    type_name[0] = tolower(type_name[0]);
    o << "Select image from types where (identifier = \"" << type_name << "\")";
}
void getwallpapersql(ostringstream& o, const int wallpaper)
{
    o << "Select image from wallpapers where (identifier = " << wallpaper << ")";
}
void getwallpapersql(ostringstream& o, const Wallpapers::wallpapers wallpaper)
{
    o << "Select image from wallpapers where (identifier = " << (int)wallpaper << ")";
}
void getitemsql(ostringstream& itemsql, const int itemid, const int generation)
{
    std::string identifier = "";
    std::ostringstream o;
    o << ""
      << "SELECT items.identifier "
      << "FROM   items "
      << "       INNER JOIN item_game_indices "
      << "               ON items.id = item_game_indices.item_id "
      << "WHERE  ( item_game_indices.game_index = " << itemid << " ) "
      << "       AND ( item_game_indices.generation_id = " << generation << ") ";
    identifier = getastring(o);
    itemsql << "select image from items where (identifier = \"" << identifier << "\")";
}
void getmarkingsql(ostringstream& o, const Markings::markings mark, const bool marked)
{
    o << "select image from markings where (identifier = \"" << int(mark) << (int)marked << "\")";
}
void getballsql(ostringstream& o, const Balls::balls ball, const int generation)
{
    getitemsql(o,balltoitem((int)ball),generation);
}
int DllExport getmovepp(const Moves::moves moveid)
{
    std::ostringstream o;
    o << ""
      << "SELECT pp "
      << "FROM   moves "
      << "WHERE  ( id = " << (int)moveid << " ) ";
    return getanint(o);
}
int DllExport getmovepp(const pokemon_obj * pkm, const int movenum)
{
    return getmovepp(pkm->moves[movenum]);
}
int DllExport getmovetotalpp(const pokemon_obj * pkm, const int movenum)
{
    int curpp = getmovepp(pkm,movenum);
    double multiplier = pkm->ppup[movenum] * 20;
    multiplier = (multiplier + 100) / 100;
    return (int)(curpp * multiplier);
}
int DllExport getpkmgenderrate(Species::pkmspecies speciesid)
{
    std::ostringstream o;
    o << ""
      << "SELECT gender_rate "
      << "FROM   pokemon_species "
      << "WHERE  ( id = " << (int)speciesid << " ) ";    return getanint(o);
}
Genders::genders DllExport calcpkmgender(const pokemon_obj * pkm)
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
Genders::genders DllExport calcpkmgender(const pokemon_obj & pkm)
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
