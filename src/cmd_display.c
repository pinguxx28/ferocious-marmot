#include "cmd_display.h"

#include <stdio.h>
#include <errno.h>
#include <string.h> /* only used for strerror */
#include <stdlib.h>
#include "fm_str.h"
#include "cmd_defines.h"

void cmd_handle_display(void) {
	int  num;
	char path[FILE_MAX];
	char line[FILE_MAX];

	printf("file: ");
	fm_getstr(path, FILE_MAX);

	do {
		fm_getstr(line, FILE_MAX);
		num = atoi(line);

		/* display file-path, line-num */
		cmd_display(path, num);

	} while(!fm_streq(line, "exit", FILE_MAX));
}

void cmd_display(const char *path, int n) {
	FILE *fp;
	fp = fopen(path, "r");
	if (fp == NULL) {
		printf("couldn't open file: %s\n", strerror(errno));
		return;
	}

	int count = 0;

	char line[FILE_LINE_MAX];
	while(fgets(line, FILE_LINE_MAX, fp) != NULL) {
		if (count == n) {
			printf("%s", line);
			break;
		}
		else {
			count++;
		}
	}
}
