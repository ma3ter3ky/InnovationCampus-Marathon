#include "header.h"

void mx_process_error(int error) {
    char *message = NULL;

    if (error == USAGE) {
        message = MX_USAGE;
    }
    else if (error == ERROR) {
        message = MX_ERROR;
    }

    mx_printerr(message);
    mx_printerr("\n");
}





