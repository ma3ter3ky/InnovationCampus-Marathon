void mx_printchar(char c);

void mx_printint(int n) {
    if (n == -2147483648) {
        mx_printchar('-');
        mx_printchar('2');
        mx_printint(147483648);
        return;
    }
    if (n < 0) {
        mx_printchar('-');
        n = -n;
    }
    if (n / 10) {
        mx_printint(n / 10);
    }
    mx_printchar(n % 10 + '0');
}












