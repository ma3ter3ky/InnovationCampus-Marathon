#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

bool mx_isspace(char c);
bool mx_digit(int c);
void mx_printchar(char c);
void mx_printint(int n);
int mx_atoi(const char *str);

int main(int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        unsigned j;
        unsigned n = mx_atoi(argv[i]);
        for (j = 1 << 31; j > 0; j = j / 2) {
            if (n & j) {
                mx_printchar('1');
            } else {
                mx_printchar('0');
            }
        }
        mx_printchar('\n');
    }
}










