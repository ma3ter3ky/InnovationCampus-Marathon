#include "header.h"

char *mx_strtrim(const char *str) {
    if (str == NULL) {
        return NULL;
    }
    int start = 0;
    int end = mx_strlen(str) - 1;
    while (mx_isspace(str[start])) {
        start++;
    }
    while (mx_isspace(str[end]) && end > start) {
        end--;
    }
    int length_of_the_trimmed_string = end - start + 1;
    char *trimmed_string = mx_strnew(length_of_the_trimmed_string);
    if (trimmed_string == NULL) {
        return NULL;
    }
    mx_strncpy(trimmed_string, str + start, length_of_the_trimmed_string);
    trimmed_string[length_of_the_trimmed_string] = '\0';
    return trimmed_string;
}







