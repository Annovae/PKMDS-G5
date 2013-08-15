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
	read(savfile,asav);

	asav->sav_type = SAV_TYPES::BW2;
	asav->setdata();
	pokemon_obj * pkm = new pokemon_obj;

	for(int box = 0; box < asav->pc_storage_size; box++)
	{
			asav->setbox(box);
			//pc_box_obj * stor = (asav->pc_storage);
		for(int slot = 0; slot < 30; slot++)
		{
			pkm = &(asav->pc_storage->pokemon[slot]);
			decryptpkm(pkm);
			if(pkm->species != 0)
			{
				cout << "Box " << (box+1) << ", Slot " << (slot+1) << ": " << lookuppkmname(pkm) << "\n";
			}
		}
	}

	//bw2sav_obj * sav = new bw2sav_obj;
	//party_pkm * ppkm = new party_pkm;
	//pokemon_obj * pkm = new pokemon_obj;
	//read(savfile,sav);
	//for(int i = 0; i < sav->cur.party.size; i++)
	//{
	//	ppkm = &(sav->cur.party.pokemon[i]);
	//	pkm = &(ppkm->pkm_data);
	//	decryptpkm(ppkm);
	//	cout << lookuppkmname(pkm) << "\n";
	//}
	closeimgdb();
	closedb();
	string empty = "";
	getline(cin,empty);
	return 0;
}
