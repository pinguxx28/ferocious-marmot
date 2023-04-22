#include <stdio.h>

#include "../tests/tests.h"
#include "cmd_generate.h"
#include "cursor.h"
#include "menu.h"
#include "cmd_update.h"
#include "cmd_display.h"
#include "cmd_generate.h"
#include "cmd_erase.h"

int main() {
	tests();
	clear();
	display_menu();
	COMMAND cmd = get_command();
	switch (cmd) {
		case UPDATE:
			cmd_handle_update();
			break;
		case DISPLAY:
			cmd_handle_display();
			break;
		case GENERATE:
			cmd_handle_generate();
			break;
		case ERASE:
			cmd_handle_erase();
			break;
		default:
			break;
	}
	return 0;
}
