/*
 * menu.h - contains functions for displaying and handling the base program
 *
 * Copyright (c) 2023 pinguxx28
 *
 * This program is released under the GNU General Public License, version 3.0.
 * See the LICENSE file for more details.
 */

#ifndef MENU_H
#define MENU_H

typedef enum {
	FETCH,
	UPDATE,
	DISPLAY,
	GENERATE,
	ERASE,
	UNKNOWN,
} COMMAND;

void display_menu(void);
COMMAND get_command(void);

#endif /* MENU_H */
