#include "cmd_update.h"

#include <stdio.h>
#include <limits.h>

void cmd_handle_update(void) {
	char oldpath[FILE_MAX];
	char newpath[FILE_MAX];

	printf("old file: ");
	scanf("%s", oldpath);

	printf("new file: ");
	scanf("%s", newpath);

	cmd_update(oldpath, newpath);
}

void cmd_update(const char *oldpath, const char *newpath) {
	int error = rename(oldpath, newpath);
	printf("%d\n", error);
}
