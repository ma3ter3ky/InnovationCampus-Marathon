#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    int size_of_provided_string = mx_strlen(str);
    char *duplicate_string = mx_strnew(size_of_provided_string);
    if (duplicate_string != NULL) {
        mx_strcpy(duplicate_string, str);
    }
    return duplicate_string;
}
















