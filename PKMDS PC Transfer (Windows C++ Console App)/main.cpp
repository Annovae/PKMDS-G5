/*
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
GatorShark, Jiggy-Ninja, Codr, Bond697, mingot, Guested,
coolbho3000 and of course, COM.

Some documentation available at: http://www.projectpokemon.org/wiki/
*/
#include <iostream>
#include "pkmds_g5.h"
using namespace std;
int main()
{
	string empty;
	string fromfile = "", tofile = "";
	bw2sav_obj *fromsav = new bw2sav_obj;
	bw2sav_obj *tosav = new bw2sav_obj;
	cout << "Enter the file name of the save file to import from:\n";
	getline(cin,fromfile);
	read(fromfile,fromsav);
	cout << "Found data for trainer ";
	wcout << fromsav->cur.otname;
	cout << "\n"; // " (ID " << (int)fromsav->cur.tid << ")\n";
	cout << "Enter the file name of the save file to export to:\n";
	getline(cin,tofile);
	read(tofile,tosav);
	cout << "Found data for trainer ";
	wcout << tosav->cur.otname;
	cout << "\n"; // " (ID " << (int)tosav->cur.tid << ")\n";
	bool isbw2 = false;
	isbw2 = (getchecksum(tosav->cur,bw2chkcalcloc,bw2chkcalclen)) == (getchkfromsav(tosav->cur,true));
	cout << "Now beginning Pokemon transfer from ";
	wcout << fromsav->cur.otname;
	cout << " to ";
	wcout << tosav->cur.otname;
	cout << ":\n";
	for(int box = 0; box < 24; box++)
	{
		for(int slot = 0; slot < 30; slot++)
		{
			tosav->cur.boxes[box].pokemon[slot] = fromsav->cur.boxes[box].pokemon[slot];
		}
		calcboxchecksum(tosav->cur,box,isbw2);
	}
	if(isbw2)
	{
		calcchecksum(tosav->cur, bw2chkcalcloc, bw2chkcalclen, bw2chkloc);
	}
	else
	{
		calcchecksum(tosav->cur, bwchkcalcloc, bwchkcalclen, bwchkloc);
	}
	write(tofile,tosav);
	cout << "Transfer complete. Press the [Enter] key to exit.\n";
	getline(cin,empty);
	return 0;
}