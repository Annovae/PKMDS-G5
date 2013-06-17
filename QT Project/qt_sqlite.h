#pragma once
#include "frmboxes.h"
#include "ui_frmboxes.h"
#include "pkmds_g5_sqlite.h"
QPixmap getpkmsprite(const pokemon_obj &pkm);
QPixmap getpkmsprite(const pokemon_obj *pkm);
QPixmap getpkmicon(const pokemon_obj &pkm);
QPixmap getpkmicon(const pokemon_obj *pkm);
