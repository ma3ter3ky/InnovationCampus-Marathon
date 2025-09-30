#pragma once

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

#define MX_NO_ARGUMENTS "usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]\n"
#define MX_INVALID_OPERATION_STR "Invalid operation: "
#define MX_INVALID_OPERAND_STR "Invalid operand: " 
#define MX_INVALID_RESULT_STR "Invalid result: "

enum e_error{
    INVALID_OPERATION,
    INVALID_OPERAND,
    INVALID_RESULT
};

enum e_type{
    OPERAND,
    OPERATOR,
	RESULT
};

void mx_process_error(int error, char *value);
int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strcpy(char *dst, const char *src);
char *mx_strtrim(const char *str);
int mx_strcmp(const char *s1, const char *s2);

void mx_arguments_validation(char *a, char *o, char *b, char *r);
void mx_combination_generator(char *operand1, const char *operation, char *operand2, char *result);













