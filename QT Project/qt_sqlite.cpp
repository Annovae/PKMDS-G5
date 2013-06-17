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
