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