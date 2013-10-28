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
#include <pkmds/pkmds_g5.h>
#else
#include "..\\..\\include\\pkmds\\pkmds_g5.h"
#endif
using namespace std;
int main(int argc, char* argv[])
{
	if(argc > 1)
	{
		try{
			const char * filename = argv[1];
			bool isbw2;
			bw2sav_obj * sav = new bw2sav_obj;
			bw2savblock_obj * cur = new bw2savblock_obj;
			party_pkm * ppkm = new party_pkm;
			pokemon_obj * pkm = new pokemon_obj;
			read(filename,sav);
			cur = &(sav->cur);
			isbw2 = savisbw2(sav);
			for(int box = 0; box < 24; box++)
			{
				for(int slot = 0; slot < 30; slot++)
				{
					pkm = &(cur->boxes[box].pokemon[slot]);
					decryptpkm(pkm);
					if(pkm->species != 0)
					{
						pkm->markings.circle = (pkm->ivs.hp == 31);
						pkm->markings.triangle = (pkm->ivs.attack == 31);
						pkm->markings.square = (pkm->ivs.defense == 31);
						pkm->markings.heart = (pkm->ivs.spatk == 31);
						pkm->markings.star = (pkm->ivs.spdef == 31);
						pkm->markings.diamond = (pkm->ivs.speed == 31);
					}
					encryptpkm(pkm);
				}
				calcboxchecksum(cur,box,isbw2);
			}
			fixsavchecksum(sav,isbw2);
			write("SAVOUT.sav",sav);
			delete sav;
		}
		catch(...)
		{

		}
	}
}
