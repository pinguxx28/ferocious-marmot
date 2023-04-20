#include "cmd_update.h"

#include <stdio.h>
#include <limits.h>
#include "fm_str.h"

void cmd_handle_update(void) {
	char oldpath[FILE_MAX];
	char newpath[FILE_MAX];

	printf("old file: ");
	fm_getstr(oldpath, FILE_MAX);

	printf("new file: ");
	fm_getstr(newpath, FILE_MAX);

	cmd_update(oldpath, newpath);
}

void cmd_update(const char *oldpath, const char *newpath) {
	int error = rename(oldpath, newpath);
	printf("%d\n", error);
}
