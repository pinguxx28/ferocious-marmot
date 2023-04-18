#include "fm_str.h"

size_t fm_strlen(const char *str, size_t max_len) {
	size_t i;

	for (i = 0; i < max_len && str[i] != '\0'; i++) {
		/* do nothing */
	}

	return i;
}
