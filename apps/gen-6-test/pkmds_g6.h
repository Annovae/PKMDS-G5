#include "../../include/pkmds/pkmds_g5.h"
// http://projectpokemon.org/wiki/Pokemon_X/Y_3DS_Structure
struct datefieldx {
    byte day;
    byte year;
    byte month;
    datefieldx()
    {
        memset(this,0,sizeof(datefield));
    }
};
//Unencrypted Data
struct pkxunencryptblock { // The unencrypted block of the Pokemon data, featuring such important things as the PID and checksum.
	uint32 pid; // The Pokemon's personality value (PID).
	uint16 ispartydatadecrypted : 1;
	uint16 isboxdatadecrypted : 1;
	uint16 isspeciesegg : 1;
uint16 : 13;
	uint16 checksum; // The checksum for the Pokemon data; used to validate data and for encryption / decryption.
	pkxunencryptblock()
	{
		memset(this,0,sizeof(pkmunencryptblock));
	}
};
/*
Block A (8-40h)
Offset	 Contents
0x08-0x09	National Pokédex ID
0x0A-0x0B	Held Item
0x0C-0x0D	OT ID
0x0E-0x0F	OT Secret ID
0x10-0x13	Experience points
0x14	Ability
0x15	 Ability number
0x16-0x17	 Unknown
0x18-0x1B	 Unknown
0x1C	 Nature
0x1D	 Bit 0 - Fateful Encounter Flag
Bit 1 - Female
Bit 2 - Genderless
Bit 3-7 - Alternate Forms
0x1E	HP Effort Value
0x1F	Attack Effort Value
0x20	Defense Effort Value
0x21	Speed Effort Value
0x22	SP Attack Effort Value
0x23	SP Defense Effort Value
0x28-0x2A	 Unknown / Unused
0x2B	Pokérus
0x2C-0x3F	 Unknown / Unused
*/
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
	evsfield evs;
uint32 : 32;
	pokerus pkrs;
	byte unknown[20];
	pkxblocka()
	{
		memset(this,0,sizeof(pkmblocka));
	}
};
/*
Block B (40-78h)
Offset	 Contents
0x40-0x57	 Nickname
0x58-0x59	 Unknown
0x5A-0x5B	Move 1 ID
0x5C-0x5D	Move 2 ID
0x5E-0x5F	Move 3 ID
0x60-0x61	Move 4 ID
0x62	Move 1 Current PP
0x63	Move 2 Current PP
0x64	Move 3 Current PP
0x65	Move 4 Current PP
0x66-0x69	Move PP Ups
0x6A-0x6B	Move 1 ID at hatching
0x6C-0x6D	Move 2 ID at hatching
0x6E-0x6F	Move 3 ID at hatching
0x70-0x71	Move 4 ID at hatching
0x74-0x78	 Bits 0-29 - Individual Values
HP ( [0-31] << 0 )
Attack ( [0-31] << 5 )
Defense ( [0-31] << 10 )
Speed ( [0-31] << 15 )
SP Attack ( [0-31] << 20 )
SP Defense ( [0-31] << 25 )
Bit 30 - IsEgg Flag
Bit 31 - IsNicknamed Flag
*/
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
	ivsfield ivs; // Individual Values
	pkxblockb()
	{
		memset(this,0,sizeof(pkmblockb));
	}
};
/*
Block C (78-B0h)
This block is dedicated to the history/memory of the Pokémon.
Offset	 Contents
0x78-0x88	 OT Name traded to (updated every time the owner's OT changes)
*/
struct pkxblockc { //
#if ! defined(MARKUP_SIZEOFWCHAR)
#if __SIZEOF_WCHAR_T__ == 4 || __WCHAR_MAX__ > 0x10000
	char ot_to_name[16];
#else
	wchar_t ot_to_name[8];
#endif
#endif
	byte unknown[40];
	pkxblockc()
	{
		memset(this,0,sizeof(pkmblockc));
	}
};
/*
Block D (B0-E8h)
Offset	 Contents
0xB0-0xBF	OT Name
0xD1-0xD3	 Date Egg Received
0xD4-0xD6	 Date Met
0xD8-0xD9	 Egg Location
0xDA-0xDB	 Met At Location
0xDC	 Pokéball
0xDD	 Bit 0-6 - Encounter Level
Bit 7 - Female OT Gender
0xDE	 Unknown / Unused
0xDF	 OT Game version (24=X, 25=Y)
0xE0	 Country ID
0xE1	 Region ID
0xE2	 3DS region ID
0xE3	 OT language
0xE4-0xE7	 Unknown / Unused
*/
struct pkxblockd { // size is currently 40 bytes?
#if ! defined(MARKUP_SIZEOFWCHAR)
#if __SIZEOF_WCHAR_T__ == 4 || __WCHAR_MAX__ > 0x10000
	char otname[16];
#else
	wchar_t otname[8];
#endif
#endif
	byte unknown[16];
	datefieldx eggdate; // Egg met date; year, month, day
	datefieldx metdate; // Met date; year, month, day
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
struct pokemonx_obj : pkxunencryptblock,pkxblocka,pkxblockb,pkxblockc,pkxblockd { // The Pokemon object, containing 136 bytes of data (as stored in the PC storage system)
	pokemonx_obj()
	{
		memset(this,0,sizeof(pokemon_obj));
	}
};
/*
Battle Stats
The battle stats are encrypted in the exact same manner as the main pkx data. The seed is still the PID.
Encrypted Bytes
Offset	 Contents
0xE8	 Bits 0-2 - Asleep (0-7 rounds)
Bit 3 - Poisoned
Bit 4 - Burned
Bit 5 - Frozen
Bit 6 - Paralyzed
Bit 7 - Toxic
0xE9	Unknown - Flags
0xEA-0xEB	 Unknown / Unused
0xEC	 Level
0xED-0xEE	 Unknown / Unused
0xEF	 Unknown / Unused
0xF0-0xF1	 Current HP
0xF2-0xF3	 Max HP
0xF4-0xF5	 Attack
0xF6-0xF7	 Defense
0xF8-0xF9	 Speed
0xFA-0xFB	 Special Attack
0xFC-0xFD	 Special Defense
0xFE-0xFF	 Unknown / Unused
0x100-0x103	 Unknown / Unused
*/
struct partyx_field { // Size: 0x54
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
struct party_pkx { // Size: 0xDC
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