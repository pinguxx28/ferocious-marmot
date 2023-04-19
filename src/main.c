#include <stdio.h>

#include "../tests/tests.h"
#include "cursor.h"
#include "menu.h"

int main() {
	tests();
	clear();
	display_menu();
	get_command();
	return 0;
}
