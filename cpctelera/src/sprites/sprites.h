//-----------------------------LICENSE NOTICE------------------------------------
//  This file is part of CPCtelera: An Amstrad CPC Game Engine
//  Copyright (C) 2014 ronaldo / Fremos / Cheesetea / ByteRealms (@FranGallegoBR)
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
//-------------------------------------------------------------------------------

//#####################################################################
//### MODULE: Sprites                                               ###
//#####################################################################
//### This module contains several functions and routines to manage ###
//### sprites and video memory in an Amstrad CPC environment.       ###
//#####################################################################
//


#ifndef CPCT_SPRITES_H
#define CPCT_SPRITES_H

extern void cpct_drawSprite2x8_aligned(char *sprite, char* memory);
extern void cpct_drawSprite2x8Fast_aligned(char *sprite, char* memory);
extern void cpct_drawSprite4x8_aligned(char *sprite, char* memory);
extern void cpct_drawSprite4x8Fast_aligned(char *sprite, char* memory);
extern void cpct_drawSprite(char *sprite, char* memory, unsigned char width, unsigned char height);
extern void cpct_drawMaskedSprite(char *maskedSprite, char* memory, unsigned char width, unsigned char height);
extern void cpct_setVideoMemoryPage(char page_codified_in_6LSb);
extern void cpct_setVideoMemoryOffset(char offset);
extern void cpct_memset(char *array, unsigned int size, unsigned char value);

#endif