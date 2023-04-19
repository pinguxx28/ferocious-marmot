/*
 * cursor.h - contains functions for messing with the terminal window
 *
 * Copyright (c) 2023 pinguxx28
 *
 * This program is released under the GNU General Public License, version 3.0.
 * See the LICENSE file for more details.
 */

#ifndef CURSOR_H
#define CURSOR_H

/* clear the screen */
void clear(void);

/* set the cursor position */
void set_cursor(int x, int y);

#endif /* CURSOR_H */
