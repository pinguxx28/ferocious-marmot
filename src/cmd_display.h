/*
 * cmd_display.h - contains functions for reading a file
 *
 * Copyright (c) 2023 pinguxx28
 *
 * This program is released under the GNU General Public License, version 3.0.
 * See the LICENSE file for more details.
 */

#ifndef CMD_DISPLAY_H
#define CMD_DISPLAY_H

/* handle reading, such as taking input etc. */
void cmd_handle_display(void);

/* read a line from file, prints out the correct errors */
void cmd_display(const char *path, int n);

#endif /* CMD_DISPLAY_H */
