/*
 * test_defines.h - defines tests and TEST macro
 *
 * Copyright (c) 2023 pinguxx28
 *
 * This program is released under the GNU General Public License, version 3.0.
 * See the LICENSE file for more details.
 */

#ifndef TEST_DEFINES_H
#define TEST_DEFINES_H

#include <stdio.h>

/* all tests */
#define RUN_TESTS  0 /* base line, if 0 no tests are run */
#define TEST_MACRO 1 /* macros.h */

/* test macro, helps with testing */
/* b is the boolean expression and t determines if the test shall be run */
#define TEST(b, t) do { \
	if (t && RUN_TESTS) { \
		printf("%s,%d ["#b"] = %s\n", \
			__FILE__, __LINE__, \
			(b)? \
				"SUCCESS": \
				"FAILIURE"); \
	} \
} while(0)

#endif /* TEST_DEFINES_H */