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
#pragma once
#include "frmboxes.h"
#include "ui_frmboxes.h"
#include <../../include/pkmds/pkmds_g5_sqlite.h>
QPixmap getpkmsprite(const pokemon_obj &pkm);
QPixmap getpkmsprite(const pokemon_obj *pkm);
QPixmap getpkmicon(const pokemon_obj &pkm);
QPixmap getpkmicon(const pokemon_obj *pkm);
QPixmap gettypepic(const Types::types type);
QPixmap gettypepic(const int type);
QPixmap getshinystar();
QPixmap getgenderpic(const Genders::genders gender);
QPixmap getwallpaperimage(const Wallpapers::wallpapers wallpaper);
QPixmap getitemimage(const int itemid);
QPixmap getmarkingimage(const Markings::markings mark, const bool marked);
