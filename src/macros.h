/*
 * macros.h - defines all the helper macros that might be needed
 *
 * Copyright (c) 2023 pinguxx28
 *
 * This program is released under the GNU General Public License, version 3.0.
 * See the LICENSE file for more details.
 */

#ifndef MACROS_H
#define MACROS_H

/* for the use of macros */
/* not recommended to use outside of this file */
#define _STMNT(s) do { s } while(0) 

/* arrays */
#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))

/* math */
#define MIN(x, y) ((x)<(y)?(x):(y))
#define MAX(x, y) ((x)>(y)?(x):(y))

/* variable modifictations */
#define CLAMP_BOT(x, l) _STMNT( if((x)<(l)) x = l; )
#define CLAMP_TOP(x, h) _STMNT( if((x)>(h)) x = h; )
#define CLAMP(x, l, h)  _STMNT(CLAMP_BOT((x), (l)); CLAMP_TOP((x), (h));)
#define SWAP(T, x, y)   _STMNT(T _x = x; x = y; y = _x;)

#endif /* MACROS_H */

