#include <stdio.h>
#include <stdbool.h>

void mx_printchar(char c);
bool mx_digit(int c);
bool mx_isspace(char c);
void mx_printint(int n);
int mx_atoi(const char *str);

int main(int argc, char *argv[]) {
    int sum_of_args = 0;
    for (int i = 1; i < argc; i++) {
        sum_of_args += mx_atoi(argv[i]);
    }
    mx_printint(sum_of_args);
    mx_printchar('\n');
    return 0;
}












