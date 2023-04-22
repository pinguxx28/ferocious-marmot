/*
 * cmd_generate.h - contains functions for generating files
 *
 * Copyright (c) 2023 pinguxx28
 *
 * This program is released under the GNU General Public License, version 3.0.
 * See the LICENSE file for more details.
 */

#ifndef CMD_GENERATE_H
#define CMD_GENERATE_H

/* handle erasing, such as taking input etc. */
void cmd_handle_generate(void);

/* generate a file, prints out the correct errors */
void cmd_generate(const char *path);

#endif /* CMD_GENERATE_H */
