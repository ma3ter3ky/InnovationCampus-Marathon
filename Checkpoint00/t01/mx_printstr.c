#include <unistd.h>

int mx_strlen(const char *s) {
    int length = 0;

    while (s[length] != '\0') {
        length++;
    }
    return length;
}

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}
















