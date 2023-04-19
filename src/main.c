#include <stdio.h>

#include "../tests/tests.h"
#include "cursor.h"
#include "menu.h"
#include "cmd_update.h"

int main() {
	tests();
	clear();
	display_menu();
	COMMAND cmd = get_command();
	switch (cmd) {
		case UPDATE:
			cmd_handle_update();
			break;
		default:
			break;
	}
	return 0;
}
