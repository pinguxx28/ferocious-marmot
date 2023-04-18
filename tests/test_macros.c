#include "test_macros.h"

#include "test_defines.h"  /* helper for testing */
#include "../src/macros.h" /* file to be tested */ 

void test_macros(void)
{
	int x, y;
	int n;
	int max, min;


	/* test min macro */
	TEST(MIN(2, 3) == 2, TEST_MACRO);
	TEST(MIN(7, 4) == 4, TEST_MACRO);
	TEST(MIN(9.1, 9.2) == 9.1, TEST_MACRO);


	/* test max macro */
	TEST(MAX(5, 4) == 5, TEST_MACRO);
	TEST(MAX(2, 4) == 4, TEST_MACRO);
	TEST(MAX(9.1, 9.2) == 9.2, TEST_MACRO);


	/* test array size */
	int arr1[] = { 1, 2, 3 };
	TEST(ARRAY_SIZE(arr1) == 3, TEST_MACRO);

	int arr2[] = { 34, 23, 65, 76, 12 };
	TEST(ARRAY_SIZE(arr2) == 5, TEST_MACRO);


	/* test clamp bottom */
	n = 2; min = 5;
	CLAMP_BOT(n, min);
	TEST(n >= min, TEST_MACRO);

	n = 7; min = 5;
	CLAMP_BOT(n, min);
	TEST(n >= min, TEST_MACRO);


	/* test clamp top */
	n = 7; max = 10;
	CLAMP_TOP(n, max);
	TEST(n <= max, TEST_MACRO);

	n = 12; max = 10;
	CLAMP_TOP(n, max);
	TEST(n <= max, TEST_MACRO);


	/* test clamp */
	min = 1; max = 10;
	n = -5;
	CLAMP(n, min, max);
	TEST(n >= min && n <= max, TEST_MACRO);

	n = 12;
	CLAMP(n, min, max);
	TEST(n >= min && n <= max, TEST_MACRO);

	n = 6;
	CLAMP(n, min, max);
	TEST(n >= min && n <= max, TEST_MACRO);


	/* test swapping */
	x = 2; y = 3;
	SWAP(int, x, y);
	TEST(x == 3 && y == 2, TEST_MACRO);

	x = 4; y = 1;
	SWAP(int, x, y);
	TEST(x == 1 && y == 4, TEST_MACRO);
}
