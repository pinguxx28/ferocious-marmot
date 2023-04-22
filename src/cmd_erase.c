#include "cmd_erase.h"

#include <stdio.h>
#include <string.h> /* only used for strerror */
#include "fm_str.h"

void cmd_handle_erase(void) {
	char path[FILE_MAX];

	printf("file: ");
	fm_getstr(path, FILE_MAX);

	cmd_erase(path);

}

void cmd_erase(const char *path) {
	int error = remove(path);

	if (error)
		printf("Error renaming [%s]: %s\n", path, strerror(error));
}
