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
#include <../../include/pkmds/stdafx.h>
struct pkmprng
{
	uint32 mseed;
	uint32 previous()
	{
		return 0xeeb9eb65 * mseed + 0xa3561a1;
	}
	uint32 previousnum()
	{
		mseed = previous();
		return mseed;
	}
	uint32 next()
	{
		return (0x41c64e6d * mseed) + 0x6073;
	}
	uint32 nextnum()
	{
		mseed = next();
		return mseed;
	}
};
