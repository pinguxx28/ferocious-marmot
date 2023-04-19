#include "menu.h"

#include <stdio.h>
#include "fm_str.h"

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
	/* no word is longer than 10 */
	const size_t lw = 10;

	char str[lw];
	scanf("%s", str);

	fm_strtolower(str, lw); /* convert to lowercase */

	COMMAND cmd;

	if      (fm_streq(str, "fetch",    lw)) cmd = FETCH;
	else if (fm_streq(str, "update",   lw)) cmd = UPDATE;
	else if (fm_streq(str, "display",  lw)) cmd = DISPLAY;
	else if (fm_streq(str, "generate", lw)) cmd = GENERATE;
	else if (fm_streq(str, "erase",    lw)) cmd = ERASE;
	else                                    cmd = UNKNOWN;

	return cmd;
}
