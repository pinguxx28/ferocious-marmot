/*
 * macros.h - defines all the helper macros that might be needed
 *
 * Copyright (c) 2023 pinguxx28
 *
 * This program is released under the GNU General Public License, version 3.0.
 * See the LICENSE file for more details.
 */

#ifndef FM_STR_H
#define FM_STR_H

#include <stddef.h>
#include <stdbool.h>

/* returns length of string */
/* if not terminating character is found, it returns max_len */
size_t fm_strlen(const char *str, size_t max_len);

/* check if s1 is equal to s2 */
/* if not terminating character is found, it returns false */
/* if max_len is 0, it returns true */
bool fm_streq(const char *s1, const char *s2, size_t max_len);

/* converts string to lower case */
void fm_strtolower(char *str, size_t max_len);

/* get string from stdio */
/* returns the length of the string */
size_t fm_getstr(char *str, size_t max_len);

#endif /* FM_STR_H */
