#include "header.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        mx_process_error(USAGE);
        exit(0);
    }
mx_printerr(argv[1]);
mx_printerr("\n");
mx_printerr(argv[2]);
mx_printerr("\n");
    int fd1 = open(argv[1], O_RDONLY);
    printf("%d-cu\n", fd1);
    if (fd1 < 0) {
        mx_printerr("mx_cp: ");
        mx_printerr(argv[1]);
        mx_process_error(NO_SUCH_FILE);
        exit(0);
    }

    int fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    printf("%d-cu\n", fd2);
   if (fd2 == -1) {
        close(fd1);
        mx_printerr("mx_cp: ");
        mx_printerr(argv[2]);
        mx_process_error(NO_SUCH_FILE);
        exit(0);
    }

    const int buffer_size = 1024;
    char buffer[buffer_size];
    int bytes_read;

    while ((bytes_read = read(fd1, buffer, buffer_size)) > 0) {
        if (write(fd2, buffer, bytes_read) != bytes_read) {
            close(fd1);
            close(fd2);
            mx_process_error(ERROR);
            exit(0);
        }
    }

    if (close(fd1) < 0 || close(fd2) < 0) {
        mx_process_error(ERROR);
        exit(0);
    }

    return 0;
}











