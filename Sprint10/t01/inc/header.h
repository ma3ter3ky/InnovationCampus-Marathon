#pragma once

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define MX_ERROR "error"
#define MX_USAGE "usage: ./mx_cp [source_file] [destination_file]"
#define MX_NO_SUCH_FILE ": No such file or directory"

enum e_error{
    ERROR,
    USAGE,
    NO_SUCH_FILE
};

int mx_strlen(const char *s);
void mx_printerr(const char *s);
void mx_printchar(char c);
void mx_process_error(int error);









