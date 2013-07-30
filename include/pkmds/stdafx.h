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
#ifdef _MSC_VER
#define DllExport __declspec(dllexport)
#else
#define DllExport __attribute__((visibility("default")))
#endif
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string.h>
#include <vector>
#include <math.h>
#include <algorithm>
#include <ctime>
typedef unsigned char byte; // 8 bits
typedef unsigned short int uint16; // 16 bits
typedef unsigned int uint32; // 32 bits
