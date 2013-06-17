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
#pragma once
#include "qt_sqlite.h"
QPixmap getpkmsprite(const pokemon_obj &pkm)
{
    QPixmap pixmap;
    std::ostringstream o = getspritesql(pkm);
    const void * blob;
    size_t thesize = 0;
    char cmd[BUFF_SIZE];
    strcpy_s(cmd,o.str().c_str());
    if(sqlite3_prepare_v2(imgdatabase,cmd,-1,&imgstatement,0) == SQLITE_OK)
    {
        int cols = sqlite3_column_count(imgstatement);
        int result = 0;
        result = sqlite3_step(imgstatement);
        if(result == SQLITE_ROW)
        {
            for(int col = 0; col < cols; col++)
            {
                blob = sqlite3_column_blob(imgstatement,col);
                thesize = sqlite3_column_bytes(imgstatement,col);
                QByteArray array;
                array = QByteArray::fromRawData((const char*)blob,thesize);
                pixmap.loadFromData(array);
            }
        }
        sqlite3_finalize(imgstatement);
    }
    return pixmap;
}
QPixmap getpkmsprite(const pokemon_obj *pkm)
{
    QPixmap pixmap;
    std::ostringstream o = getspritesql(pkm);
    const void * blob;
    size_t thesize = 0;
    char cmd[BUFF_SIZE];
    strcpy_s(cmd,o.str().c_str());
    if(sqlite3_prepare_v2(imgdatabase,cmd,-1,&imgstatement,0) == SQLITE_OK)
    {
        int cols = sqlite3_column_count(imgstatement);
        int result = 0;
        result = sqlite3_step(imgstatement);
        if(result == SQLITE_ROW)
        {
            for(int col = 0; col < cols; col++)
            {
                blob = sqlite3_column_blob(imgstatement,col);
                thesize = sqlite3_column_bytes(imgstatement,col);
                QByteArray array;
                array = QByteArray::fromRawData((const char*)blob,thesize);
                pixmap.loadFromData(array);
            }
        }
        sqlite3_finalize(imgstatement);
    }
    return pixmap;
}
QPixmap getpkmicon(const pokemon_obj &pkm)
{
    QPixmap pixmap;
    std::ostringstream o = geticonsql(pkm);
    const void * blob;
    size_t thesize = 0;
    char cmd[BUFF_SIZE];
    strcpy_s(cmd,o.str().c_str());
    if(sqlite3_prepare_v2(imgdatabase,cmd,-1,&imgstatement,0) == SQLITE_OK)
    {
        int cols = sqlite3_column_count(imgstatement);
        int result = 0;
        result = sqlite3_step(imgstatement);
        if(result == SQLITE_ROW)
        {
            for(int col = 0; col < cols; col++)
            {
                blob = sqlite3_column_blob(imgstatement,col);
                thesize = sqlite3_column_bytes(imgstatement,col);
                QByteArray array;
                array = QByteArray::fromRawData((const char*)blob,thesize);
                pixmap.loadFromData(array);
            }
        }
        sqlite3_finalize(imgstatement);
    }
    return pixmap;
}
QPixmap getpkmicon(const pokemon_obj *pkm)
{
    QPixmap pixmap;
    std::ostringstream o = geticonsql(pkm);
    const void * blob;
    size_t thesize = 0;
    char cmd[BUFF_SIZE];
    strcpy_s(cmd,o.str().c_str());
    if(sqlite3_prepare_v2(imgdatabase,cmd,-1,&imgstatement,0) == SQLITE_OK)
    {
        int cols = sqlite3_column_count(imgstatement);
        int result = 0;
        result = sqlite3_step(imgstatement);
        if(result == SQLITE_ROW)
        {
            for(int col = 0; col < cols; col++)
            {
                blob = sqlite3_column_blob(imgstatement,col);
                thesize = sqlite3_column_bytes(imgstatement,col);
                QByteArray array;
                array = QByteArray::fromRawData((const char*)blob,thesize);
                pixmap.loadFromData(array);
            }
        }
        sqlite3_finalize(imgstatement);
    }
    return pixmap;
}
