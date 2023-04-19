#include "cursor.h"

#include <stdio.h>

void clear(void)
{
	printf("\033[2J"); /* clear screen */
	set_cursor(1, 1);  /* set cursor to topleft */
}

void set_cursor(int x, int y)
{
	printf("\033[%d;%dH", y, x);
}
