#include "header.h"
 
void mx_process_error(int error, char *value) { 
    char *message = NULL;
 
    if (error == INVALID_OPERAND) {
        message = MX_INVALID_OPERAND_STR;
    }
    else if (error == INVALID_OPERATION) {
        message = MX_INVALID_OPERATION_STR;
    }
    else if (error == INVALID_RESULT) {
        message = MX_INVALID_RESULT_STR;
    }

    mx_printerr(message);
    mx_printerr(value);
    mx_printchar('\n');
}
