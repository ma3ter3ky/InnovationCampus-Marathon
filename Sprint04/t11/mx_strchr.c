#include <stddef.h> 

char *mx_strchr(const char *s, int c) {
    while (*s != c) {
        if (*s == '\0') {
            return c == '\0' ? (char *)s : NULL;
        }
        s++;
    }
    return (char *)s;
}





















