#include <iostream>
#include <string>
#include "../../include/pkmds/pkmds_g5_sqlite.h"
using namespace std;
int main()
{
	char * savfile = "..\\..\\Test Sav\\TEST SAV.sav";
	opendb("..\\..\\SQLite Databases\\veekun-pokedex.sqlite");
	openimgdb("..\\..\\SQLite Databases\\images.sqlite");

	sav_object * asav = new sav_object;
	read("C:\\Users\\Michael Bond\\Documents\\GitHub\\PKMDS-G5\\Test Sav\\TEST SAV.sav",asav);
	//("C:\\Users\\Michael Bond\\Documents\\GitHub\\PKMDS-G5\\Test Sav\\TEST SAV.sav");

	asav->sav_type = SAV_TYPES::BW2;
	asav->setdata();

	bw2sav_obj * sav = new bw2sav_obj;
	party_pkm * ppkm = new party_pkm;
	pokemon_obj * pkm = new pokemon_obj;
	read(savfile,sav);
	for(int i = 0; i < sav->cur.party.size; i++)
	{
		ppkm = &(sav->cur.party.pokemon[i]);
		pkm = &(ppkm->pkm_data);
		decryptpkm(ppkm);
		cout << lookuppkmname(pkm) << "\n";
	}
	closeimgdb();
	closedb();
	string empty = "";
	getline(cin,empty);
	return 0;
}
