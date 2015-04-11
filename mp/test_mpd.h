/****************************************************************
Copyright 1990 - 1995 by AT&T Bell Laboratories.

Permission to use, copy, modify, and distribute this software
and its documentation for any purpose and without fee is hereby
granted, provided that the above copyright notice appear in all
copies and that both that the copyright notice and this
permission notice and warranty disclaimer appear in supporting
documentation, and that the names of AT&T Bell Laboratories or
any of its entities not be used in advertising or publicity
pertaining to distribution of the software without specific,
written prior permission.

AT&T disclaims all warranties with regard to this software,
including all implied warranties of merchantability and fitness.
In no event shall AT&T be liable for any special, indirect or
consequential damages or any damages whatsoever resulting from
loss of use, data or profits, whether in an action of contract,
negligence or other tortious action, arising out of or in
connection with the use or performance of this software.
****************************************************************/

#undef	TRIP
#undef	TRAP
#define	STAT
#undef	DEBUG
#include "mp.h"
/* 1 9998 9999 */ 
typedef integer scaled  ; 
typedef integer fraction  ; 
typedef integer strnumber  ; 
EXTERN boolean aritherror  ; 

fraction zmakefraction();
integer ztakefraction();
integer ztakescaled();
scaled zmakescaled();
fraction qmakefraction();
integer qtakefraction();
integer qtakescaled();
scaled qmakescaled();
