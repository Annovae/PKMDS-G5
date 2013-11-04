#include "../../include/pkmds/pkmds_g5.h"
// http://projectpokemon.org/wiki/Pokemon_X/Y_3DS_Structure
//Unencrypted Data
struct pkxunencryptblock { // The unencrypted block of the Pokemon data, featuring such important things as the PID and checksum.
	uint32 pid; // The Pokemon's personality value (PID); used for encryption / decryption.
	uint16 ispartydatadecrypted : 1;
	uint16 isboxdatadecrypted : 1;
	uint16 isspeciesegg : 1;
uint16 : 13;
	uint16 checksum; // The checksum for the Pokemon data; used to validate data.
	pkxunencryptblock()
	{
		memset(this,0,sizeof(pkmunencryptblock));
	}
};
struct pkxblocka { //
	Species::pkmspecies species; // National Pokedex ID
	Items::items item; // Held item index
	uint16 tid; // Trainer ID
	uint16 sid; // Secret ID
	uint32 exp; // Accumulated experience points
	Abilities::abilities ability;
	byte abilitynumber;
uint16 : 16;
uint32 : 32;
	Natures::natures nature;
	formsfield forms;
	evsfield evs; // 6 bytes
uint32 : 32;
	byte unknown[3];
	pokerus pkrs;
uint32 : 32;
	uint32 kalosribbons;
	byte unknown2[12];
	pkxblocka()
	{
		memset(this,0,sizeof(pkmblocka));
	}
};
struct pkxblockb { //
#if ! defined(MARKUP_SIZEOFWCHAR)
#if __SIZEOF_WCHAR_T__ == 4 || __WCHAR_MAX__ > 0x10000
	char nickname[24];
#else
	wchar_t nickname[12];
#endif
#endif
uint16 : 16;
	Moves::moves moves[4]; // Move index array
	byte pp[4]; // Current PP array
	byte ppup[4]; // PP Ups used array
	Moves::moves eggmoves[4];
uint16 : 16;
	ivsfield ivs; // Individual Values
	pkxblockb()
	{
		memset(this,0,sizeof(pkmblockb));
	}
};
struct pkxblockc { //
#if ! defined(MARKUP_SIZEOFWCHAR)
#if __SIZEOF_WCHAR_T__ == 4 || __WCHAR_MAX__ > 0x10000
	char ot_to_name[24];
#else
	wchar_t ot_to_name[12];
#endif
#endif
	byte unknown[32];
	pkxblockc()
	{
		memset(this,0,sizeof(pkmblockc));
	}
};
struct pkxblockd { // 
#if ! defined(MARKUP_SIZEOFWCHAR)
#if __SIZEOF_WCHAR_T__ == 4 || __WCHAR_MAX__ > 0x10000
	char otname[24];
#else
	wchar_t otname[12];
#endif
#endif
	byte unknown[10];
	datefield eggdate; // Egg met date; year, month, day
	datefield metdate; // Met date; year, month, day
	//byte : 8;
	Locations::locations eggmet; // Egg met location
	Locations::locations met; // Met location
	Balls::balls ball; // Ball captured with and kept in
	metlevelfield metlevel_otgender; // Met level, original trainer gender flag
byte : 8;
	Hometowns::hometowns hometown;
	Countries::countries country;
	byte regionid;
	byte regionid3ds;
	byte otlang;
uint32 : 32; //
	pkxblockd()
	{
		memset(this,0,sizeof(pkmblockd));
	}
};
struct pokemonx_obj : pkxunencryptblock,pkxblocka,pkxblockb,pkxblockc,pkxblockd { // The Pokemon object, containing 232 bytes of data (as stored in the PC storage system)
	pokemonx_obj()
	{
		memset(this,0,sizeof(pokemon_obj));
	}
};
struct partyx_field { // Size: 
	status_field status;
byte : 8;
uint16 : 16;
	byte level;
uint16 : 16;
byte : 8;
	uint16 hp;
	uint16 maxhp;
	uint16 attack;
	uint16 defense;
	uint16 speed;
	uint16 spatk;
	uint16 spdef;
uint16 : 16;
uint32 : 32;
	//byte unknown[0x40];
	partyx_field()
	{
		memset(this,0,sizeof(party_field));
	}
};
struct party_pkx { // Size: 
	pokemonx_obj pkx_data;
	partyx_field partyx_data;
	party_pkx()
	{
		memset(this,0,sizeof(party_pkm));
	}
};
void DllExport pkmcrypt(partyx_field* pkx, uint32 pid);
void DllExport encryptpkm(party_pkx* pkx);
void DllExport decryptpkm(party_pkx* pkx);
byte DllExport getpkmshuffleindex(const pokemonx_obj *pkx);
void DllExport unshufflepkm(pokemonx_obj *pkx);
void DllExport shufflepkm(pokemonx_obj *pkx);
void DllExport pkmcrypt(pokemonx_obj* pkx);
void DllExport encryptpkm(pokemonx_obj* pkx);
void DllExport decryptpkm(pokemonx_obj* pkx);
void DllExport calcchecksum(pokemonx_obj* pkx);
void DllExport read(const char* file_name, pokemonx_obj *data);
void DllExport read(const wchar_t * file_name, pokemonx_obj *data);
void DllExport write(const char* file_name, pokemonx_obj* data);
void DllExport write(const wchar_t * file_name, pokemonx_obj* data);
bool DllExport getpkmshiny(const pokemonx_obj *pkx);
