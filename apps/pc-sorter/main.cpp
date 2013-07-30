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
#include "pkmds_g5_sqlite.h"
#include "pkmds_vector.h"
using namespace std;
int main(int argc, char* argv[])
{
	char * saveout = "OUT.sav";
	bw2sav_obj* sav = new bw2sav_obj;
	read(argv[1],sav);
	std::vector<pokemon_obj> *vpkm = new std::vector<pokemon_obj>;
	vpkm = getpcvector(&(sav->cur));
	std::vector<pokemon_obj>::const_iterator pkmit;
	pkmit = vpkm->begin();
	sortbyspeciesasc(*vpkm);
	const pokemon_obj * blankpkm = new pokemon_obj;
	memset(blankpkm,0x0,sizeof(pokemon_obj));
	pkmit = vpkm->begin();
	pokemon_obj * pkm = new pokemon_obj;
	for(int box = 0; box < 24; box++)
	{
		for(int slot = 0; slot < 30; slot++)
		{
			if(((box*30)+slot) < vpkm->size())
			{
				*pkm = *pkmit;
				encryptpkm(pkm);
				sav->cur.boxes[box].pokemon[slot] = *pkm;
				pkmit++;
			}else
			{
				sav->cur.boxes[box].pokemon[slot] = *blankpkm;
			}
		}
		calcboxchecksum(&(sav->cur),box,savisbw2(sav));
	}
	fixsavchecksum(sav);
	write(saveout,sav);
	delete pkm;
	pkm = 0;
	delete vpkm;
	vpkm = 0;
	delete sav;
	sav = 0;
	return 0;
}
