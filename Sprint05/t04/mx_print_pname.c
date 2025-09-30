#include <stdio.h>

int mx_strlen(const char *s);
void mx_printchar(char c);
void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);

int main(int argc, char *argv[]) {
    (void)argc;
    char *provided_name = argv[0];
    while (mx_strchr(provided_name, '/') != 0) {
        provided_name = mx_strchr(provided_name, '/') + 1;
    }
    mx_printstr(provided_name);
    mx_printchar('\n');
    return 0;
}













