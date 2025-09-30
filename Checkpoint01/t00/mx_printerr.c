#include <unistd.h>

int mx_strlen(const char *s) {
    int length = 0;

    while (s[length] != '\0') {
        length++;
    }
    return length;
}

void mx_printerr(const char *s) {
    write(2, s, mx_strlen(s));
}
















