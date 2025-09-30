#include <stdlib.h>

char *mx_strcpy(char *dst, const char *src) {
    int i = 0;

    while (src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}

int mx_strlen(const char *s) {
    int length = 0;

    while (s[length] != '\0') {
        length++;
    }
    return length;
}

char *mx_strnew(const int size) {
    char *str = malloc(size + 1);
    if (str == NULL) {
        return NULL;
    }
    for (int i = 0; i <= size; i++) {
        str[i] = '\0';
    }
    return str;
}

char *mx_strdup(const char *str) {
    int size_of_provided_string = mx_strlen(str);
    char *duplicate_string = mx_strnew(size_of_provided_string);
    if (duplicate_string != NULL) {
        mx_strcpy(duplicate_string, str);
    }
    return duplicate_string;
}









