#include "calculator.h"

int perform_operation(int a, char *op, int b);
int mx_add(int a, int b) {
    return a + b;
}
int mx_sub(int a, int b) {
    return a - b;
}
int mx_mul(int a, int b) {
    return a * b;
}
int mx_div(int a, int b) {
    return a / b;
}
int mx_mod(int a, int b) {
    return a % b;
}

int perform_operation(int a, char *op, int b) {
    t_operation ops[] = {
            {'+', mx_add}, {'-', mx_sub}, {'*', mx_mul}, {'/', mx_div}, {'%', mx_mod}, {0, NULL}
    };

    for (int i = 0; ops[i].f != NULL; i++) {
        if (*op == ops[i].op) {
            mx_printint(ops[i].f(a, b));
            mx_printchar('\n');
            return 1;
        }
    }
    return 0;
}
int main(int argc, char *argv[]) {
    if (argc != 4) {
        mx_printerr("usage: ./calc [operand1] [operation] [operand2]\n");
        return 0;
    }
    if ((mx_atoi(argv[1]) == 0 && mx_strcmp(argv[1], "0") != 0) || (mx_atoi(argv[3]) == 0 && mx_strcmp(argv[3], "0") != 0)) {
        mx_printerr("error: invalid number\n");
        return 0;
    }
    if (mx_strcmp(argv[3], "0") == 0 && (mx_strcmp(argv[2], "/") == 0 || mx_strcmp(argv[2], "%") == 0)) {
        mx_printerr("error: division by zero\n");
        return 0;
    }

    if (!perform_operation(mx_atoi(argv[1]), argv[2], mx_atoi(argv[3]))) {
        mx_printerr("error: invalid operation\n");
    }
    return 0;
}








