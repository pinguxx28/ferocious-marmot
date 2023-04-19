#include "menu.h"

#include <stdio.h>

void display_menu(void)
{
	printf("1. Fetch\n");
	printf("2. Update\n");
	printf("3. Display\n");
	printf("4. Generate\n");
	printf("5. Erase\n");
}

COMMAND get_command(void)
{
	char str[10];
	scanf("%s", str);

	return FETCH;
}
