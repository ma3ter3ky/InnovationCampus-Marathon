#include "header.h"

void mx_process_error(int error) {
    char *message = NULL;

    if (error == USAGE) {
        message = MX_USAGE;
    }
    else if (error == ERROR) {
        message = MX_ERROR;
    }
    else if (error == NO_SUCH_FILE) {
        message = MX_NO_SUCH_FILE;
    }

    mx_printerr(message);
    mx_printerr("\n");
}





