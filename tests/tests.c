#include "tests.h"

#include "test_macros.h" /* contains tests for macros.h */
#include "test_fm_str.h" /* contains tests for fm_str.h */

void tests(void)
{
	test_macros();
	test_fm_str();
}
