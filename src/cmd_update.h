/*
 * cmd_update.h - contains functions for renaming a file
 *
 * Copyright (c) 2023 pinguxx28
 *
 * This program is released under the GNU General Public License, version 3.0.
 * See the LICENSE file for more details.
 */

#ifndef CMD_UPDATE_H
#define CMD_UPDATE_H

/* handle renaming, such as taking input etc. */
void cmd_handle_update(void);

/* update a file, prints out the correct errors */
void cmd_update(const char *oldpath, const char *newpath);

#endif /* CMD_UPDATE_H */
