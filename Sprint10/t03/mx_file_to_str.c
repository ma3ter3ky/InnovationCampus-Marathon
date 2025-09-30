#include "file_to_str.h"

char *mx_file_to_string(const char *filename) {
    if (!filename) return NULL;

    int fd = open(filename, O_RDONLY);
    if (fd == -1) return NULL;

    char ch;
    int size = 0;

    while (read(fd, &ch, 1) == 1) size++;

    if (close(fd) == -1) return NULL;

    fd = open(path, O_RDONLY);
    if (fd == -1) return NULL;

    char *str = (char *)malloc(size + 1);
    if (!str) {
        close(fd);
        return NULL;
    }

    for (int idx = 0; idx < size && read(fd, &ch, 1) == 1; idx++) {
        str[idx] = ch;
    }
    str[size] = '\0';

    if (close(fd) == -1) {
        free(str);
        return NULL;
    }

    return str;
}














