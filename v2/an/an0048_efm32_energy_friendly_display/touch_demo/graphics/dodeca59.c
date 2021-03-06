/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap converter for emWin V5.16.                           *
*        Compiled Jun  4 2012, 15:48:30                              *
*        (C) 1998 - 2010 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: dodeca59                                              *
* Dimensions:  128 * 128                                             *
* NumColors:   2                                                     *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR Colorsdodeca59[] = {
     0xFFFFFF,0x000000
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Paldodeca59 = {
  2,	/* number of entries */
  0, 	/* No transparency */
  &Colorsdodeca59[0]
};

static GUI_CONST_STORAGE unsigned char acdodeca59[] = {
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X______X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, _XX_XX__, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXX__XXX, X____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXX__XXX, XXXX____, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXX_XXX, XXXXXXX_, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXX_XXX, XXXXXXXX, XXX___XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXX____, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, __XXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXXX_, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXX_, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXX_XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX_XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XX_XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX___X, X___XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX___XX, XX____XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXX____, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXX_, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, X____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___, XXXXXXXX, XXX__XX_, ______XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX____, X__X____, XXXXXXXX, XXXX____, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX____X, XXXXXXXX, XXXXXXXX, XXXX____, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, XXXXX_XX, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XX_XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX, XXXXX_XX, X____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXX____X, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXXXX, XXXXXXXX, XX_XXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXXX___, _XXXXXXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXXX_, __XXXXXX, XXXXXXXX, XXXXXXX_, __XXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXX___X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, XXXXXXXX, ____XXXX, XXXXXXXX, XXXXXX__, __XXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_X___XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, XXXXXXXX, XX____XX, XXXXXXXX, XXXX____, __XXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXX___X, XXXXXXXX, XXX_____, __XXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXX___, _XXXXXXX, XX______, __XXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXXX_, ___XXXXX, X____X__, __XXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXXXX, X___XXXX, ________, __XXXXXX, XXXXXXXX,
  XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XX______, __X_____, __XXXXXX, XXXXXXXX,
  XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX_XXXXX, XXXXXXXX, XXXX____, __X_X___, __XXXXXX, XXXXXXXX,
  XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, XXX___XX, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX_XXXXX, XXXXXXXX, XXXXX__X, XX______, __XXXXXX, XXXXXXXX,
  XXXXXXXX, XX______, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXXX__X, X_X_X__X, __XXXXXX, XXXXXXXX,
  XXXXXXXX, XXX_X___, ___XXXXX, XXXXXXXX, X___XXX_, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXXX__X, ________, __XXXXXX, XXXXXXXX,
  XXXXXXXX, XXX_XXX_, _____XXX, XXXXXXXX, ___XXXX_, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXX__X, X_______, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXX__XXX, XX______, XXXXXXX_, __XXXXX_, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXX___X, ______X_, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXX__XXX, XXXXX___, ___XXX__, _XXXXXX_, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXX__XX, __X_____, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX_XXX, XXXXXXXX, ________, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXX___X, X_______, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX_XXX, XXXXXXXX, XX_____X, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXX__X_, X_______, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXX___X, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXX___XX, X_X_____, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXX__X, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXX__X_X, ___X__X_, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXX___, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, XXXXXXXX, XXX__X_X, ________, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXX__, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, XXXXXXXX, XXX__XXX, X_X_____, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXX__, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, _XXXXXXX, XXX__X__, ____X___, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXX_, _XXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XX___XXX, _____X__, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXX_, _XXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, XX__XXXX, XX__XX__, X_______, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXX_, __XX__XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXXXX__, XX__XXX_, __X_____, _XXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, __XX_XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, X_____X_, ________, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, ___X_XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, X_______, ________, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, X__X_XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX_XXXX, XXXXXXXX, X__XX___, ________, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, X_____XX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, X__XXX__, ________, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX, ____X___, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, X__X__X_, ________, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXXX_, _____XX_, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXXXXX, ___XXX__, ________, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, XXXXXXXX, XXXXX___, _XX__XXX, X__XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, __XX__X_, _______X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, _XXXXXXX, XXX____X, XXX___XX, XXX__XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, __XXXX__, _______X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXX_, _XXXXXXX, XX___XXX, XXXX__XX, XXXXX__X, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX, __XX__XX, _______X, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, _XXXXXXX, ____XXXX, XXXX__XX, XXXXXX__, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, __X_XX__, X_____XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, _XXXXX__, __XXXXXX, XXXXX__X, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, XX_XXXXX, XXXXXXXX, XXXXXXX_, __XXX___, __X___XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, _XXXX___, XXXXXXXX, XXXXX__X, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXX_, _XX_XX__, ______XX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, __X____X, XXXXXXXX, XXXXX___, XXXXXXXX, XXXX_XXX, XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXXXX, XXXXXXX_, _XX__X__, _X___XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, _____XXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XXXXXXX_, _XXX____, _____XXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X___XXXX, XXXXXXXX, XXXXXX__, _XXXXXXX, XXXXXXX_, _XXXXXXX, XXXXX_XX, XXXXXXXX, XXXXXXXX, XXXXXX__, _XX_X_X_, _X__XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXXXX, X__XXXXX, XXXX_XXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XX_XX__X, ____XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXX_, __XXXXXX, XXXXXXXX, XXX__XXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXX_____, ____XXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXX__XX, XX_XXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XX_XX___, ___XXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, ___XXXXX, XXXXXXXX, XXXXXX__, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXX_X__, X__XXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XX_X____, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XX__X_X_, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, _XX__X_X, __XXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XX_X____, _XXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXXXX, XXXXXXXX, XXXX___X, _XX__X__, _XXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, _X____X_, _XXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXXXXXXX, XXX___XX, XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XX______, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXXXX, XXXXXXXX, XXXX____, _XX__X__, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXX___X, XXXXXXXX, XXXXXXXX, X_XXXXXX, XXXXXXXX, XXX_____, ________, ____X__X, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXXXX, X__XXXXX, XX______, ________, ________, _______X, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, XXXXX___, XXXXXXXX, XXXXXXXX, X_______, ________, ____XXXX, XXXXX___, ___X___X, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX__XX, XXXXXXXX, XXXXXX__, XXXXXXXX, X_______, ________, ___XXXXX, XXXXXXXX, XXXXXX__, ____X_XX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX__X, XXXXXXXX, XXXXXX__, ________, ________, ___XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, ______XX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX_X, XXXXXXXX, XXXXXX__, ________, __XXXXXX, XX_XXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, ______XX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXX__, XXXXXXXX, XXXXX___, _XXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, _XXXXXXX, XXXX____, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, __XXXXXX, XXX___XX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXXXXX_, ____XXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X_XXXXXX, XX___XXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, XXXX____, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, X__XXXXX, X___XXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, XXXXXXXX, XXXXXXXX, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XX__XXXX, ___XXXXX, XXXXXXXX, XXXXXXXX, XXX_XXXX, XXXXXXXX, XXXX____, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XX_, __XXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXXXXXX, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXX__X__, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXX__XXX, XXXX____, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXX____, XXXX_XXX, XXXXXXXX, X_X_X_XX, XXX__XXX, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXX___, ________, ________, ________, ________, _XXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, _____XXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX,
  XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX, XXXXXXXX
};

GUI_CONST_STORAGE GUI_BITMAP bmdodeca59 = {
  128, /* XSize */
  128, /* YSize */
  16, /* BytesPerLine */
  1, /* BitsPerPixel */
  acdodeca59,  /* Pointer to picture data (indices) */
  &Paldodeca59,   /* Pointer to palette */
  NULL
};

/* *** End of file *** */
