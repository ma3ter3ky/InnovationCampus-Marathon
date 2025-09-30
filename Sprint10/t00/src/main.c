#include "header.h"

int main (int argc, char *argv[]) {
    if (argc != 2) {
        mx_process_error(USAGE);
        return 1;
    }
    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        mx_process_error(ERROR);
        return 1;
    }
    const int bufer_size = 1024;
    char buffer[bufer_size];
    int bytes_read;

    while ((bytes_read = read(fd, buffer, bufer_size)) > 0) {
        write(STDOUT_FILENO, buffer, bytes_read);
    }
    if (close(fd) < 0) {
        mx_process_error(ERROR);
        return 1;
    }
    
    return 0;
}




