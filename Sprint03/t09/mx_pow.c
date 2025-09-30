double mx_pow(double n, unsigned int pow) {
    if (pow == 0) {
        return 1;
    }
    unsigned int half_pow = pow / 2;
    unsigned int remainder = pow % 2;
    double result = mx_pow(n, half_pow);
    result *= result;
    if (remainder != 0) {
        result *= n;
    }
    return result;
}

















