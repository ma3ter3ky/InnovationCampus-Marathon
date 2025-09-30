#pragma once

#include <unistd.h>
#include <fcntl.h>

#define MX_ERROR "error"
#define MX_USAGE "usage: ./read_file [file_path]"

enum e_error{
    ERROR,
    USAGE
};

int mx_strlen(const char *s);
void mx_printerr(const char *s);
void mx_printchar(char c);
void mx_process_error(int error);



