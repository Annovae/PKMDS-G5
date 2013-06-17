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
	const pokemon_obj blankpkm = {};
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
				sav->cur.boxes[box].pokemon[slot] = blankpkm;
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