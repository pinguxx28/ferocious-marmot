#include "fm_str.h"

#include <stdio.h>
#include <ctype.h>

size_t fm_strlen(const char *str, size_t max_len) {
	size_t i;

	for (i = 0; i < max_len && str[i] != '\0'; i++) {
		/* do nothing */
	}

	return i;
}

bool fm_streq(const char *s1, const char *s2, size_t max_len) {
	for (size_t i = 0; i < max_len; i++) {
		if (s1[i] != s2[i]) return false;
		if (s1[i] == '\0') break;
	}

	return true;
}

void fm_strtolower(char *str, size_t max_len) {
	for (size_t i = 0; i < max_len; i++) {
		str[i] = tolower(str[i]);
	}
}

size_t fm_getstr(char *str, size_t max_len) {
	char c;
	size_t i;

	for (i = 0; i < max_len; i++) {
		c = getchar();
		if (c == EOF || c == '\n') break;

		str[i] = c;
	}
	str[i + 1] = '\0';

	return i;
}
