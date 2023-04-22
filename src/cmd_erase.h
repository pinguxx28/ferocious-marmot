/*
 * cmd_erase.h - contains functions for deleting a file
 *
 * Copyright (c) 2023 pinguxx28
 *
 * This program is released under the GNU General Public License, version 3.0.
 * See the LICENSE file for more details.
 */

#ifndef CMD_ERASE_H
#define CMD_ERASE_H

/* maximum file name */
#define FILE_MAX 80

/* handle erasing, such as taking input etc. */
void cmd_handle_erase(void);

/* erase a file, prints out the correct errors */
void cmd_erase(const char *path);

#endif /* CMD_ERASE_H */
