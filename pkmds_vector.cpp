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
#include "pkmds_vector.h"
#include "pkmds_g5_sqlite.h"
bool comparebyspeciesasc(const pokemon_obj &a, const pokemon_obj &b)
{
	return a.species < b.species;
	//return a.blocka.species < b.blocka.species;
}
void sortbyspeciesasc(std::vector<pokemon_obj>& pkm)
{
	std::sort(pkm.begin(), pkm.end(), comparebyspeciesasc);
}
bool comparebygenderasc(const pokemon_obj &a, const pokemon_obj &b)
{
	return (int)(getpkmgender(a)) < (int)(getpkmgender(b));
}
void sortbygenderasc(std::vector<pokemon_obj>& pkm)
{
	std::sort(pkm.begin(), pkm.end(), comparebygenderasc);
}
bool comparebyformasc(const pokemon_obj &a, const pokemon_obj &b)
{
	//return a.blockb.forms.form < b.blockb.forms.form;
	return a.forms.form < b.forms.form;
}
void sortbyformasc(std::vector<pokemon_obj>& pkm)
{
	std::sort(pkm.begin(), pkm.end(), comparebyformasc);
}
bool comparebyattackasc(const pokemon_obj &a, const pokemon_obj &b)
{
	return getpkmstat(a,Stat_IDs::attack) < getpkmstat(b,Stat_IDs::attack);
}
void sortbyattackasc(std::vector<pokemon_obj>& pkm)
{
	std::sort(pkm.begin(), pkm.end(), comparebyattackasc);
}
bool comparebydefenseasc(const pokemon_obj &a, const pokemon_obj &b)
{
	return getpkmstat(a,Stat_IDs::defense) < getpkmstat(b,Stat_IDs::defense);
}
void sortbydefenseasc(std::vector<pokemon_obj>& pkm)
{
	std::sort(pkm.begin(), pkm.end(), comparebydefenseasc);
}
bool comparebyspeedasc(const pokemon_obj &a, const pokemon_obj &b)
{
	return getpkmstat(a,Stat_IDs::speed) < getpkmstat(b,Stat_IDs::speed);
}
void sortbyspeedasc(std::vector<pokemon_obj>& pkm)
{
	std::sort(pkm.begin(), pkm.end(), comparebyspeedasc);
}
bool comparebyspatkasc(const pokemon_obj &a, const pokemon_obj &b)
{
	return getpkmstat(a,Stat_IDs::spatk) < getpkmstat(b,Stat_IDs::spatk);
}
void sortbyspatkasc(std::vector<pokemon_obj>& pkm)
{
	std::sort(pkm.begin(), pkm.end(), comparebyspatkasc);
}
bool comparebyspdefasc(const pokemon_obj &a, const pokemon_obj &b)
{
	return getpkmstat(a,Stat_IDs::spdef) < getpkmstat(b,Stat_IDs::spdef);
}
void sortbyspdefasc(std::vector<pokemon_obj>& pkm)
{
	std::sort(pkm.begin(), pkm.end(), comparebyspdefasc);
}
bool comparebyhpasc(const pokemon_obj &a, const pokemon_obj &b)
{
	return getpkmstat(a,Stat_IDs::hp) < getpkmstat(b,Stat_IDs::hp);
}
void sortbyhpasc(std::vector<pokemon_obj>& pkm)
{
	std::sort(pkm.begin(), pkm.end(), comparebyhpasc);
}
std::vector<pokemon_obj> *getpcvector(bw2savblock_obj * block, const bool encrypted)
{
	std::vector<pokemon_obj> *vpkm = new std::vector<pokemon_obj>;
	for(int box = 0; box < 24; box++)
	{
		for(int slot = 0; slot < 30; slot++)
		{
			if(encrypted)
			{
				decryptpkm(&(block->boxes[box].pokemon[slot]));
			}
			//if(block->boxes[box].pokemon[slot].blocka.species != 0)
			if(block->boxes[box].pokemon[slot].species != 0)
			{
				vpkm->push_back(block->boxes[box].pokemon[slot]);
			}
			if(encrypted)
			{
				encryptpkm(&(block->boxes[box].pokemon[slot]));
			}
		}
	}
	return vpkm;
}
std::vector<pokemon_obj*> *getpcvectorp(bw2savblock_obj * block, const bool encrypted)
{
	std::vector<pokemon_obj*> *vpkm = new std::vector<pokemon_obj*>;
	for(int box = 0; box < 24; box++)
	{
		for(int slot = 0; slot < 30; slot++)
		{
			if(encrypted)
			{
				decryptpkm(&(block->boxes[box].pokemon[slot]));
			}
			//if(block->boxes[box].pokemon[slot].blocka.species != 0)
			if(block->boxes[box].pokemon[slot].species != 0)
			{
				vpkm->push_back(&(block->boxes[box].pokemon[slot]));
			}
			if(encrypted)
			{
				encryptpkm(&(block->boxes[box].pokemon[slot]));
			}
		}
	}
	return vpkm;
}



bool comparebyspeciesascp(pokemon_obj *a, pokemon_obj *b)
{
	//return a->blocka.species < b->blocka.species;
	return a->species < b->species;
}
void sortbyspeciesascp(std::vector<pokemon_obj*>* pkm)
{
	//std::sort((*pkm).begin(), (*pkm).end(), comparebyspeciesascp);
	std::sort(((*pkm).begin()),((*pkm).end()),comparebyspeciesascp);
	//std::sort((*pkm).begin(), (*pkm).end(), comparebyspeciesascp);
}
bool comparebygenderascp(const pokemon_obj *a, const pokemon_obj *b)
{
	return (int)(getpkmgender(a)) < (int)(getpkmgender(b));
}
//void sortbygenderascp(std::vector<pokemon_obj>* pkm)
//{
//	std::sort(pkm->begin(), pkm->end(), comparebygenderascp);
//}
bool comparebyformascp(const pokemon_obj *a, const pokemon_obj *b)
{
	//return a->blockb.forms.form < b->blockb.forms.form;
	return a->forms.form < b->forms.form;
}
//void sortbyformascp(std::vector<pokemon_obj>* pkm)
//{
//	std::sort(pkm->begin(), pkm->end(), comparebyformascp);
//}
bool comparebyattackascp(const pokemon_obj *a, const pokemon_obj *b)
{
	return getpkmstat(a,Stat_IDs::attack) < getpkmstat(b,Stat_IDs::attack);
}
//void sortbyattackascp(std::vector<pokemon_obj>* pkm)
//{
//	std::sort(pkm->begin(), pkm->end(), comparebyattackascp);
//}
bool comparebydefenseascp(const pokemon_obj *a, const pokemon_obj *b)
{
	return getpkmstat(a,Stat_IDs::defense) < getpkmstat(b,Stat_IDs::defense);
}
//void sortbydefenseascp(std::vector<pokemon_obj>* pkm)
//{
//	std::sort(pkm->begin(), pkm->end(), comparebydefenseascp);
//}
bool comparebyspeedascp(const pokemon_obj *a, const pokemon_obj *b)
{
	return getpkmstat(a,Stat_IDs::speed) < getpkmstat(b,Stat_IDs::speed);
}
//void sortbyspeedascp(std::vector<pokemon_obj>* pkm)
//{
//	std::sort(pkm->begin(), pkm->end(), comparebyspeedascp);
//}
bool comparebyspatkascp(const pokemon_obj *a, const pokemon_obj *b)
{
	return getpkmstat(a,Stat_IDs::spatk) < getpkmstat(b,Stat_IDs::spatk);
}
//void sortbyspatkascp(std::vector<pokemon_obj>* pkm)
//{
//	std::sort(pkm->begin(), pkm->end(), comparebyspatkascp);
//}
bool comparebyspdefascp(const pokemon_obj *a, const pokemon_obj *b)
{
	return getpkmstat(a,Stat_IDs::spdef) < getpkmstat(b,Stat_IDs::spdef);
}
//void sortbyspdefascp(std::vector<pokemon_obj>* pkm)
//{
//	std::sort(pkm->begin(), pkm->end(), comparebyspdefascp);
//}
bool comparebyhpascp(const pokemon_obj *a, const pokemon_obj *b)
{
	return getpkmstat(a,Stat_IDs::hp) < getpkmstat(b,Stat_IDs::hp);
}
//void sortbyhpascp(std::vector<pokemon_obj>* pkm)
//{
//	std::sort(pkm->begin(), pkm->end(), comparebyhpascp);
//}
