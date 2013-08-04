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
#include "PKMDS-G5\include\pkmds\pkmds_g5_sqlite.h"
#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char* argv[])
{
	opendb("veekun-pokedex.sqlite");
	char * filename;
	pokemon_obj * pkm = new pokemon_obj;
	ofstream myfile;
	myfile.open("OUTPUT.csv",ios::out);
	myfile << "Dex No,PID,OT,ID,SID,Nickname,Gender,Level,Nature,Ability,Location,Ribbon,Ball,Move 1,Move 2,Move 3,Move 4\n";
	for(int i = 1; i < argc; i++)
	{
		filename = argv[i];
		read(filename,pkm);
		ostringstream o;
		std::wstring wstr;
		o << (int)(pkm->species);
		o << ",";
		o << (pkm->pid);
		o << ",";
		wstr = getpkmotname(pkm);
		o << std::string(wstr.begin(),wstr.end());
		o << ",";
		o << (pkm->tid);
		o << ",";
		o << (pkm->sid);
		o << ",";
		wstr = getpkmnickname(pkm);
		o << std::string(wstr.begin(),wstr.end());
		o << ",";
		o << getpkmgendername(pkm);
		o << ",";
		o << (getpkmlevel(pkm));
		o << ",";
		o << getnaturename(pkm);
		o << ",";
		o << lookupabilityname(pkm);
		o << ",";
		o << getpkmmetlocname(pkm);
		o << ",";
		o << "RIBBON";
		o << ",";
		o << lookupitemname(balltoitem((int)(pkm->ball)));
		o << ",";
		for(int move = 0; move < 3; move++)
		{
			o << lookupmovename(pkm,move) << ",";
		}
		o << lookupmovename(pkm,3);
		o << "\n";
		string str = o.str();
		myfile << str;
	}
	myfile.close();
	closedb();
	return 0;
}
