#include "header.h"

void output_the_combination(int operand1, const char operation, int operand2, int result) {
    mx_printint(operand1);
    mx_printchar(' ');
    mx_printchar(operation);
    mx_printchar(' ');
    mx_printint(operand2);
    mx_printstr(" = ");
    mx_printint(result);
    mx_printchar('\n');
}

bool is_combination_valid(int operand1, const char operation, int operand2, int result) {
    char operation_sign = operation;
    if (operation_sign == '+') {
        return operand1 + operand2 == result;
    } else if (operation_sign == '-') {
        return operand1 - operand2 == result;
    } else if (operation_sign == '*') {
        return operand1 * operand2 == result;
    } else if (operation_sign == '/') {
        if (operand2 == 0) return false;
        return operand1 / operand2 == result;
    } else {
        return false;
    }
}

void iterate_digits(char *pattern, int index, int length, int *variations, int *pos_in_variations) {
    if (index >= length) {
        variations[*pos_in_variations] = mx_atoi(pattern);
        (*pos_in_variations)++;
        return;
    }
    if (pattern[index] == '?') {
        for (char digit = '0'; digit <= '9'; digit++) {
            pattern[index] = digit;
            iterate_digits(pattern, index + 1, length, variations, pos_in_variations);
        }
        pattern[index] = '?';
    } else {
        iterate_digits(pattern, index + 1, length, variations, pos_in_variations);
    }
}

void mx_combination_generator(char *operand1, const char *operation, char *operand2, char *result) {
    if (*operation == '?') {
        mx_combination_generator(operand1, "+", operand2, result);
        mx_combination_generator(operand1, "-", operand2, result);
        mx_combination_generator(operand1, "*", operand2, result);
        mx_combination_generator(operand1, "/", operand2, result);
        return;
    }
    int amount_of_variations_op1 = 1, length_op1 = mx_strlen(operand1);
    int amount_of_variations_op2 = 1, length_op2 = mx_strlen(operand2);
    int amount_of_variations_res = 1, length_res = mx_strlen(result);

    for (int i = 0; i < length_op1; i++) {
        if (operand1[i] == '?') {
            amount_of_variations_op1 *= 10;
        }
    }
    for (int i = 0; i < length_op2; i++) {
        if (operand2[i] == '?') {
            amount_of_variations_op2 *= 10;
        }
    }
    for (int i = 0; i < length_res; i++) {
        if (result[i] == '?') {
            amount_of_variations_res *= 10;
        }
    }

    int *variations_op1 = malloc(amount_of_variations_op1 * sizeof(int));
    int *variations_op2 = malloc(amount_of_variations_op2 * sizeof(int));
    int *variations_res = malloc(amount_of_variations_res * sizeof(int));

    char temp_operand1[length_op1 + 1];
    char temp_operand2[length_op2 + 1];
    char temp_result[length_res + 1];

    mx_strcpy(temp_operand1, operand1);
    mx_strcpy(temp_operand2, operand2);
    mx_strcpy(temp_result, result);

    int pos_in_variations = 0;
    iterate_digits(temp_operand1, 0, length_op1, variations_op1, &pos_in_variations);
    pos_in_variations = 0;
    iterate_digits(temp_operand2, 0, length_op2, variations_op2, &pos_in_variations);
    pos_in_variations = 0;
    iterate_digits(temp_result, 0, length_res, variations_res, &pos_in_variations);

    for (int ir = 0; ir < amount_of_variations_res; ir++) {
        for (int i1 = 0; i1 < amount_of_variations_op1; i1++) {
            for (int i2 = 0; i2 < amount_of_variations_op2; i2++) {
                if (is_combination_valid(variations_op1[i1], *operation, variations_op2[i2], variations_res[ir])) {
                    output_the_combination(variations_op1[i1], *operation, variations_op2[i2], variations_res[ir]);
                }
            }
        }
    }

    free(variations_op1);
    free(variations_op2);
    free(variations_res);
}























