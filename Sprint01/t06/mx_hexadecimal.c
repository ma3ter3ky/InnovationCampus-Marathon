void mx_printchar(char);
void mx_hexadecimal(void) {
    for (char i = '0'; i <= '9'; i++) {
        mx_printchar((char)i);
    }
    for (char i = 'A'; i <= 'F'; i++) {
        mx_printchar((char)i);
    }
    mx_printchar('\n');
}




















