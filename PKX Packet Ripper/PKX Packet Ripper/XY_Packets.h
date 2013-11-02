// 103 bytes
// pkx box data
// 28 bytes
#include "../../include/pkmds/pkmds_g6.h"
#pragma pack (push, 1)
struct trade_packet
{
	byte header[103];
	pokemonx_obj pkx_data;
	byte footer[28];
};
void DllExport read(const char* file_name, trade_packet *data);
void DllExport read(const wchar_t * file_name, trade_packet *data);
