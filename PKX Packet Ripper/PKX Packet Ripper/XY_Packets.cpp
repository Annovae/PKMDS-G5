#include "XY_Packets.h"
void read(const char* file_name, trade_packet *data) // Reads the given file and assigns the data to the given save file object.
{
	std::ifstream *in = new std::ifstream(file_name,std::ios::binary);
	in->read(reinterpret_cast<char*>(data), sizeof(trade_packet)-1);
	in->close();
	delete in;
	in = 0;
}
void read(const wchar_t * file_name, trade_packet *data) // Reads the given file and assigns the data to the given save file object.
{
	std::ifstream *in = new std::ifstream(file_name,std::ios::binary);
	in->read(reinterpret_cast<char*>(data), sizeof(trade_packet)-1);
	in->close();
	delete in;
	in = 0;
}
