void mx_printchar(char);
void mx_print_alphabet(void) {
    for (int i = 65; i <= 89; i += 2){
        mx_printchar((char) i);
        mx_printchar((char) (i + 33));
    }
    mx_printchar('\n');
}






















