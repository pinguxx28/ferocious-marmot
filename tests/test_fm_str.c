#include "test_fm_str.h"

#include "test_defines.h"
#include "../src/fm_str.h" /* file to be tested */

void test_fm_str(void)
{
	/* fm_strlen */
	char str[] = "hello";
	TEST(fm_strlen(str, 10) == 5, TEST_FM_STR);
	
	char a[2] = { 'a', 'b' };
	TEST(fm_strlen(a, 2) == 2, TEST_FM_STR);


	/* fm_streq */
	TEST( fm_streq("hello", "hello", 10), TEST_FM_STR);
	TEST(!fm_streq("hello", "world", 10), TEST_FM_STR);
	TEST(!fm_streq("hel"  , "helta", 10), TEST_FM_STR);
	TEST( fm_streq("hella", "hello",  3), TEST_FM_STR);
	TEST( fm_streq("hello", "hello",  0), TEST_FM_STR);
	TEST( fm_streq("abdis", "abbeb",  0), TEST_FM_STR);
}
