#include "pkmds_g6.h"
using namespace std;
int main()
{
	int test;
	const char * filename = "C:\\Users\\michaelbond\\Downloads\\Gen VI Stuff\\Scyther.bin";
	pokemonx_obj * pkx = new pokemonx_obj;
	read(filename,pkx);
	decryptpkm(pkx);
	//cout << "size of unenc: " << sizeof(pkxunencryptblock) << "\n";
	//cout << "size of blocka: " << sizeof(pkxblocka) << "\n";
	//cout << "size of blockb: " << sizeof(pkxblockb) << "\n";
	//cout << "size of blockc: " << sizeof(pkxblockc) << "\n";
	//cout << "size of blockd: " << sizeof(pkxblockd) << "\n";
	//cout << "size of pkx: " << sizeof(pokemonx_obj) << "\n";
	//cout << "size of party field: " << sizeof(partyx_field) << "\n";
	//cout << "size of party_pkx: " << sizeof(party_pkx) << "\n";
	cout << "species id is: " << (int)(pkx->species) << "\n";
	cin >> test;
	return 0;
}