#include "fm_str.h"

size_t fm_strlen(const char *str, size_t max_len) {
	size_t i;

	for (i = 0; i < max_len && str[i] != '\0'; i++) {
		/* do nothing */
	}

	return i;
}

bool fm_streq(const char *s1, const char *s2, size_t max_len) {
	for (size_t i = 0; i < max_len; i++) {
		if (s1[i] != s2[i] || s1[i] == '\0') {
			return false;
		}
	}

	return true;
}
