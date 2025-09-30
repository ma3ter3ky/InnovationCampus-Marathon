#include "header.h"

int main(int argc, char *argv[]) {
    if(argc != 5){
        mx_printerr(MX_NO_ARGUMENTS);
        exit(-1);
    }
    char *operand1 = argv[1];
    char *operation = argv[2];
    char *operand2 = argv[3];
    char *result = argv[4];

    operand1 = mx_strtrim(operand1);
    operation = mx_strtrim(operation);
    operand2 = mx_strtrim(operand2);
    result = mx_strtrim(result);

    mx_arguments_validation(operand1, operation, operand2, result);
    mx_combination_generator(operand1, operation, operand2, result);
    return 0;
}





