#pragma once

#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>


int mx_strlen(const char *s);
void mx_printerr(const char*s);
void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
bool mx_isspace(char c);




