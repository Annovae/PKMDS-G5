#pragma once
#include "stdafx.h"
struct trainerinfostruct
{
    byte trainername[8];
    byte playergender;
    uint16 trainerid;
    uint16 secretid;
    uint16 hoursplayed;
    byte minutesplayed;
    byte secondsplayed;
    byte framesplayed;
    uint32 gamecode;
    uint32 securitycode;
};
struct team_itemstruct
{
    byte data[1472];
};
struct unknown1struct
{
    byte data[3968];
};
struct unknown2struct
{
    byte data[3968];
};
struct rivalinfostruct
{
    byte data[3848];
};
//struct pcbuffstruct
//{
//    byte data[3968];
//};
enum sectionids : uint16
{
    trainerinfo,
    team_items,
    unknown1,
    unknown2,
    rivalinfo,
    pcbuffa,
    pcbuffb,
    pcbuffc,
    pcbuffd,
    pcbuffe,
    pcbufff,
    pcbuffg,
    pcbuffh,
    pcbuffi
};
struct sectionfooter
{
    sectionids sectionid;
    uint16 checksum;
    uint32 saveindex;
};
struct datasection
{
    byte data[4080];
    sectionfooter footer;
};
struct shuffledgamesavestruct
{
    datasection datasections[14];
};
struct gbaboxstruct
{
    byte data[30][80];
};
struct gamesavestruct
{
    trainerinfostruct trainerinfo_;
    team_itemstruct team_items_;
    unknown1struct unknown1_;
    unknown2struct unknown2_;
    rivalinfostruct rivalinfo_;
    uint32 curbox;
    gbaboxstruct boxes[14];
//    pcbuffstruct pcbuffa_;
//    pcbuffstruct pcbuffb_;
//    pcbuffstruct pcbuffc_;
//    pcbuffstruct pcbuffd_;
//    pcbuffstruct pcbuffe_;
//    pcbuffstruct pcbufff_;
//    pcbuffstruct pcbuffg_;
//    pcbuffstruct pcbuffh_;
//    pcbuffstruct pcbuffi_;
};
struct gba_sav
{
public:
    gamesavestruct savea;
    gamesavestruct saveb;
//private:
    byte unused[16384];
};
