#include "cmd_generate.h"

#include <stdio.h>
#include <errno.h>
#include <string.h> /* only used for strerror */
#include "fm_str.h"
#include "cmd_defines.h"

void cmd_handle_generate(void) {
	char path[FILE_MAX];

	printf("file: ");
	fm_getstr(path, FILE_MAX);

	cmd_generate(path);
}

void cmd_generate(const char *path) {
	FILE *fp;
	fp = fopen(path, "a");

	if (fp == NULL)
		printf("Error creating file [%s]: %s\n", path, strerror(errno));

	fclose(fp);
}
