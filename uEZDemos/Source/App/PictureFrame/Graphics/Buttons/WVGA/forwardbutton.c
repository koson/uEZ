/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap converter for emWin V5.12.                           *
*        Compiled Jun 29 2011, 15:28:21                              *
*        (C) 1998 - 2010 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: forwardbutton                                         *
* Dimensions:  72 * 72                                               *
* NumColors:   3                                                     *
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

static GUI_CONST_STORAGE GUI_COLOR Colorsforwardbutton[] = {
     0xFFFFFF,0xFF0000,0x808080
};

static GUI_CONST_STORAGE GUI_LOGPALETTE Palforwardbutton = {
  3,	/* number of entries */
  1, 	/* Has transparency */
  &Colorsforwardbutton[0]
};

static GUI_CONST_STORAGE unsigned char acforwardbutton[] = {
  /* RLE: 657 Pixels @ 000,000*/ 254, 0x00, 254, 0x00, 149, 0x00, 
  /* RLE: 011 Pixels @ 009,009*/ 11, 0x01, 
  /* RLE: 012 Pixels @ 020,009*/ 12, 0x00, 
  /* RLE: 006 Pixels @ 032,009*/ 6, 0x01, 
  /* RLE: 043 Pixels @ 038,009*/ 43, 0x00, 
  /* RLE: 011 Pixels @ 009,010*/ 11, 0x01, 
  /* RLE: 012 Pixels @ 020,010*/ 12, 0x00, 
  /* RLE: 006 Pixels @ 032,010*/ 6, 0x01, 
  /* RLE: 043 Pixels @ 038,010*/ 43, 0x00, 
  /* RLE: 011 Pixels @ 009,011*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,011*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,011*/ 9, 0x00, 
  /* RLE: 009 Pixels @ 032,011*/ 9, 0x01, 
  /* RLE: 040 Pixels @ 041,011*/ 40, 0x00, 
  /* RLE: 011 Pixels @ 009,012*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,012*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,012*/ 9, 0x00, 
  /* RLE: 009 Pixels @ 032,012*/ 9, 0x01, 
  /* RLE: 040 Pixels @ 041,012*/ 40, 0x00, 
  /* RLE: 011 Pixels @ 009,013*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,013*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,013*/ 9, 0x00, 
  /* RLE: 009 Pixels @ 032,013*/ 9, 0x01, 
  /* RLE: 040 Pixels @ 041,013*/ 40, 0x00, 
  /* RLE: 011 Pixels @ 009,014*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,014*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,014*/ 9, 0x00, 
  /* RLE: 011 Pixels @ 032,014*/ 11, 0x01, 
  /* RLE: 038 Pixels @ 043,014*/ 38, 0x00, 
  /* RLE: 011 Pixels @ 009,015*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,015*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,015*/ 9, 0x00, 
  /* RLE: 011 Pixels @ 032,015*/ 11, 0x01, 
  /* RLE: 038 Pixels @ 043,015*/ 38, 0x00, 
  /* RLE: 011 Pixels @ 009,016*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,016*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,016*/ 9, 0x00, 
  /* RLE: 013 Pixels @ 032,016*/ 13, 0x01, 
  /* RLE: 036 Pixels @ 045,016*/ 36, 0x00, 
  /* RLE: 011 Pixels @ 009,017*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,017*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,017*/ 9, 0x00, 
  /* RLE: 013 Pixels @ 032,017*/ 13, 0x01, 
  /* RLE: 036 Pixels @ 045,017*/ 36, 0x00, 
  /* RLE: 011 Pixels @ 009,018*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,018*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,018*/ 9, 0x00, 
  /* RLE: 015 Pixels @ 032,018*/ 15, 0x01, 
  /* RLE: 034 Pixels @ 047,018*/ 34, 0x00, 
  /* RLE: 011 Pixels @ 009,019*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,019*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,019*/ 9, 0x00, 
  /* RLE: 015 Pixels @ 032,019*/ 15, 0x01, 
  /* RLE: 034 Pixels @ 047,019*/ 34, 0x00, 
  /* RLE: 011 Pixels @ 009,020*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,020*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,020*/ 9, 0x00, 
  /* RLE: 018 Pixels @ 032,020*/ 18, 0x01, 
  /* RLE: 031 Pixels @ 050,020*/ 31, 0x00, 
  /* RLE: 011 Pixels @ 009,021*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,021*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,021*/ 9, 0x00, 
  /* RLE: 018 Pixels @ 032,021*/ 18, 0x01, 
  /* RLE: 031 Pixels @ 050,021*/ 31, 0x00, 
  /* RLE: 011 Pixels @ 009,022*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,022*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,022*/ 9, 0x00, 
  /* RLE: 018 Pixels @ 032,022*/ 18, 0x01, 
  /* RLE: 031 Pixels @ 050,022*/ 31, 0x00, 
  /* RLE: 011 Pixels @ 009,023*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,023*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,023*/ 9, 0x00, 
  /* RLE: 020 Pixels @ 032,023*/ 20, 0x01, 
  /* RLE: 029 Pixels @ 052,023*/ 29, 0x00, 
  /* RLE: 011 Pixels @ 009,024*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,024*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,024*/ 9, 0x00, 
  /* RLE: 020 Pixels @ 032,024*/ 20, 0x01, 
  /* RLE: 029 Pixels @ 052,024*/ 29, 0x00, 
  /* RLE: 011 Pixels @ 009,025*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,025*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,025*/ 9, 0x00, 
  /* RLE: 022 Pixels @ 032,025*/ 22, 0x01, 
  /* RLE: 027 Pixels @ 054,025*/ 27, 0x00, 
  /* RLE: 011 Pixels @ 009,026*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,026*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,026*/ 9, 0x00, 
  /* RLE: 022 Pixels @ 032,026*/ 22, 0x01, 
  /* RLE: 027 Pixels @ 054,026*/ 27, 0x00, 
  /* RLE: 011 Pixels @ 009,027*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,027*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,027*/ 9, 0x00, 
  /* RLE: 024 Pixels @ 032,027*/ 24, 0x01, 
  /* RLE: 025 Pixels @ 056,027*/ 25, 0x00, 
  /* RLE: 011 Pixels @ 009,028*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,028*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,028*/ 9, 0x00, 
  /* RLE: 024 Pixels @ 032,028*/ 24, 0x01, 
  /* RLE: 025 Pixels @ 056,028*/ 25, 0x00, 
  /* RLE: 011 Pixels @ 009,029*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,029*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,029*/ 9, 0x00, 
  /* RLE: 027 Pixels @ 032,029*/ 27, 0x01, 
  /* RLE: 022 Pixels @ 059,029*/ 22, 0x00, 
  /* RLE: 011 Pixels @ 009,030*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,030*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,030*/ 9, 0x00, 
  /* RLE: 027 Pixels @ 032,030*/ 27, 0x01, 
  /* RLE: 022 Pixels @ 059,030*/ 22, 0x00, 
  /* RLE: 011 Pixels @ 009,031*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,031*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,031*/ 9, 0x00, 
  /* RLE: 027 Pixels @ 032,031*/ 27, 0x01, 
  /* RLE: 022 Pixels @ 059,031*/ 22, 0x00, 
  /* RLE: 011 Pixels @ 009,032*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,032*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,032*/ 9, 0x00, 
  /* RLE: 029 Pixels @ 032,032*/ 29, 0x01, 
  /* RLE: 020 Pixels @ 061,032*/ 20, 0x00, 
  /* RLE: 011 Pixels @ 009,033*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,033*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,033*/ 9, 0x00, 
  /* RLE: 029 Pixels @ 032,033*/ 29, 0x01, 
  /* RLE: 020 Pixels @ 061,033*/ 20, 0x00, 
  /* RLE: 011 Pixels @ 009,034*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,034*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,034*/ 9, 0x00, 
  /* RLE: 031 Pixels @ 032,034*/ 31, 0x01, 
  /* RLE: 018 Pixels @ 063,034*/ 18, 0x00, 
  /* RLE: 011 Pixels @ 009,035*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,035*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,035*/ 9, 0x00, 
  /* RLE: 031 Pixels @ 032,035*/ 31, 0x01, 
  /* RLE: 018 Pixels @ 063,035*/ 18, 0x00, 
  /* RLE: 011 Pixels @ 009,036*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,036*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,036*/ 9, 0x00, 
  /* RLE: 031 Pixels @ 032,036*/ 31, 0x01, 
  /* ABS: 002 Pixels @ 063,036*/ 0, 2, 0x02, 0x02, 
  /* RLE: 016 Pixels @ 065,036*/ 16, 0x00, 
  /* RLE: 011 Pixels @ 009,037*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,037*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,037*/ 9, 0x00, 
  /* RLE: 031 Pixels @ 032,037*/ 31, 0x01, 
  /* ABS: 002 Pixels @ 063,037*/ 0, 2, 0x02, 0x02, 
  /* RLE: 016 Pixels @ 065,037*/ 16, 0x00, 
  /* RLE: 011 Pixels @ 009,038*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,038*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,038*/ 9, 0x00, 
  /* RLE: 029 Pixels @ 032,038*/ 29, 0x01, 
  /* RLE: 004 Pixels @ 061,038*/ 4, 0x02, 
  /* RLE: 016 Pixels @ 065,038*/ 16, 0x00, 
  /* RLE: 011 Pixels @ 009,039*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,039*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,039*/ 9, 0x00, 
  /* RLE: 029 Pixels @ 032,039*/ 29, 0x01, 
  /* RLE: 004 Pixels @ 061,039*/ 4, 0x02, 
  /* RLE: 016 Pixels @ 065,039*/ 16, 0x00, 
  /* RLE: 011 Pixels @ 009,040*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,040*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,040*/ 9, 0x00, 
  /* RLE: 029 Pixels @ 032,040*/ 29, 0x01, 
  /* RLE: 004 Pixels @ 061,040*/ 4, 0x02, 
  /* RLE: 016 Pixels @ 065,040*/ 16, 0x00, 
  /* RLE: 011 Pixels @ 009,041*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,041*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,041*/ 9, 0x00, 
  /* RLE: 027 Pixels @ 032,041*/ 27, 0x01, 
  /* RLE: 004 Pixels @ 059,041*/ 4, 0x02, 
  /* RLE: 018 Pixels @ 063,041*/ 18, 0x00, 
  /* RLE: 011 Pixels @ 009,042*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,042*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,042*/ 9, 0x00, 
  /* RLE: 027 Pixels @ 032,042*/ 27, 0x01, 
  /* RLE: 004 Pixels @ 059,042*/ 4, 0x02, 
  /* RLE: 018 Pixels @ 063,042*/ 18, 0x00, 
  /* RLE: 011 Pixels @ 009,043*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,043*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,043*/ 9, 0x00, 
  /* RLE: 024 Pixels @ 032,043*/ 24, 0x01, 
  /* RLE: 005 Pixels @ 056,043*/ 5, 0x02, 
  /* RLE: 020 Pixels @ 061,043*/ 20, 0x00, 
  /* RLE: 011 Pixels @ 009,044*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,044*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,044*/ 9, 0x00, 
  /* RLE: 024 Pixels @ 032,044*/ 24, 0x01, 
  /* RLE: 005 Pixels @ 056,044*/ 5, 0x02, 
  /* RLE: 020 Pixels @ 061,044*/ 20, 0x00, 
  /* RLE: 011 Pixels @ 009,045*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,045*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,045*/ 9, 0x00, 
  /* RLE: 022 Pixels @ 032,045*/ 22, 0x01, 
  /* RLE: 005 Pixels @ 054,045*/ 5, 0x02, 
  /* RLE: 022 Pixels @ 059,045*/ 22, 0x00, 
  /* RLE: 011 Pixels @ 009,046*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,046*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,046*/ 9, 0x00, 
  /* RLE: 022 Pixels @ 032,046*/ 22, 0x01, 
  /* RLE: 005 Pixels @ 054,046*/ 5, 0x02, 
  /* RLE: 022 Pixels @ 059,046*/ 22, 0x00, 
  /* RLE: 011 Pixels @ 009,047*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,047*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,047*/ 9, 0x00, 
  /* RLE: 020 Pixels @ 032,047*/ 20, 0x01, 
  /* RLE: 004 Pixels @ 052,047*/ 4, 0x02, 
  /* RLE: 025 Pixels @ 056,047*/ 25, 0x00, 
  /* RLE: 011 Pixels @ 009,048*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,048*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,048*/ 9, 0x00, 
  /* RLE: 020 Pixels @ 032,048*/ 20, 0x01, 
  /* RLE: 004 Pixels @ 052,048*/ 4, 0x02, 
  /* RLE: 025 Pixels @ 056,048*/ 25, 0x00, 
  /* RLE: 011 Pixels @ 009,049*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,049*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,049*/ 9, 0x00, 
  /* RLE: 020 Pixels @ 032,049*/ 20, 0x01, 
  /* RLE: 004 Pixels @ 052,049*/ 4, 0x02, 
  /* RLE: 025 Pixels @ 056,049*/ 25, 0x00, 
  /* RLE: 011 Pixels @ 009,050*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,050*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,050*/ 9, 0x00, 
  /* RLE: 018 Pixels @ 032,050*/ 18, 0x01, 
  /* RLE: 004 Pixels @ 050,050*/ 4, 0x02, 
  /* RLE: 027 Pixels @ 054,050*/ 27, 0x00, 
  /* RLE: 011 Pixels @ 009,051*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,051*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,051*/ 9, 0x00, 
  /* RLE: 018 Pixels @ 032,051*/ 18, 0x01, 
  /* RLE: 004 Pixels @ 050,051*/ 4, 0x02, 
  /* RLE: 027 Pixels @ 054,051*/ 27, 0x00, 
  /* RLE: 011 Pixels @ 009,052*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,052*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,052*/ 9, 0x00, 
  /* RLE: 015 Pixels @ 032,052*/ 15, 0x01, 
  /* RLE: 005 Pixels @ 047,052*/ 5, 0x02, 
  /* RLE: 029 Pixels @ 052,052*/ 29, 0x00, 
  /* RLE: 011 Pixels @ 009,053*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,053*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,053*/ 9, 0x00, 
  /* RLE: 015 Pixels @ 032,053*/ 15, 0x01, 
  /* RLE: 005 Pixels @ 047,053*/ 5, 0x02, 
  /* RLE: 029 Pixels @ 052,053*/ 29, 0x00, 
  /* RLE: 011 Pixels @ 009,054*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,054*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,054*/ 9, 0x00, 
  /* RLE: 013 Pixels @ 032,054*/ 13, 0x01, 
  /* RLE: 005 Pixels @ 045,054*/ 5, 0x02, 
  /* RLE: 031 Pixels @ 050,054*/ 31, 0x00, 
  /* RLE: 011 Pixels @ 009,055*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,055*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,055*/ 9, 0x00, 
  /* RLE: 013 Pixels @ 032,055*/ 13, 0x01, 
  /* RLE: 005 Pixels @ 045,055*/ 5, 0x02, 
  /* RLE: 031 Pixels @ 050,055*/ 31, 0x00, 
  /* RLE: 011 Pixels @ 009,056*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,056*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,056*/ 9, 0x00, 
  /* RLE: 011 Pixels @ 032,056*/ 11, 0x01, 
  /* RLE: 004 Pixels @ 043,056*/ 4, 0x02, 
  /* RLE: 034 Pixels @ 047,056*/ 34, 0x00, 
  /* RLE: 011 Pixels @ 009,057*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,057*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,057*/ 9, 0x00, 
  /* RLE: 011 Pixels @ 032,057*/ 11, 0x01, 
  /* RLE: 004 Pixels @ 043,057*/ 4, 0x02, 
  /* RLE: 034 Pixels @ 047,057*/ 34, 0x00, 
  /* RLE: 011 Pixels @ 009,058*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,058*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,058*/ 9, 0x00, 
  /* RLE: 011 Pixels @ 032,058*/ 11, 0x01, 
  /* RLE: 004 Pixels @ 043,058*/ 4, 0x02, 
  /* RLE: 034 Pixels @ 047,058*/ 34, 0x00, 
  /* RLE: 011 Pixels @ 009,059*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,059*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,059*/ 9, 0x00, 
  /* RLE: 009 Pixels @ 032,059*/ 9, 0x01, 
  /* RLE: 004 Pixels @ 041,059*/ 4, 0x02, 
  /* RLE: 036 Pixels @ 045,059*/ 36, 0x00, 
  /* RLE: 011 Pixels @ 009,060*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,060*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,060*/ 9, 0x00, 
  /* RLE: 009 Pixels @ 032,060*/ 9, 0x01, 
  /* RLE: 004 Pixels @ 041,060*/ 4, 0x02, 
  /* RLE: 036 Pixels @ 045,060*/ 36, 0x00, 
  /* RLE: 011 Pixels @ 009,061*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,061*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,061*/ 9, 0x00, 
  /* RLE: 006 Pixels @ 032,061*/ 6, 0x01, 
  /* RLE: 005 Pixels @ 038,061*/ 5, 0x02, 
  /* RLE: 038 Pixels @ 043,061*/ 38, 0x00, 
  /* RLE: 011 Pixels @ 009,062*/ 11, 0x01, 
  /* RLE: 003 Pixels @ 020,062*/ 3, 0x02, 
  /* RLE: 009 Pixels @ 023,062*/ 9, 0x00, 
  /* RLE: 006 Pixels @ 032,062*/ 6, 0x01, 
  /* RLE: 005 Pixels @ 038,062*/ 5, 0x02, 
  /* RLE: 040 Pixels @ 043,062*/ 40, 0x00, 
  /* RLE: 012 Pixels @ 011,063*/ 12, 0x02, 
  /* RLE: 011 Pixels @ 023,063*/ 11, 0x00, 
  /* RLE: 007 Pixels @ 034,063*/ 7, 0x02, 
  /* RLE: 042 Pixels @ 041,063*/ 42, 0x00, 
  /* RLE: 012 Pixels @ 011,064*/ 12, 0x02, 
  /* RLE: 011 Pixels @ 023,064*/ 11, 0x00, 
  /* RLE: 007 Pixels @ 034,064*/ 7, 0x02, 
  /* RLE: 535 Pixels @ 041,064*/ 254, 0x00, 254, 0x00, 27, 0x00, 


  0};  /* 620 bytes for 5184 pixels */

GUI_CONST_STORAGE GUI_BITMAP bmforwardbutton = {
  72, /* XSize */
  72, /* YSize */
  72, /* BytesPerLine */
  GUI_COMPRESS_RLE8, /* BitsPerPixel */
  acforwardbutton,  /* Pointer to picture data (indices) */
  &Palforwardbutton,  /* Pointer to palette */
  GUI_DRAW_RLE8
};

/* *** End of file *** */