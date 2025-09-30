int mx_factorial_rec(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    int next_factorial = mx_factorial_rec(n - 1);
    if (2147483647 / n < next_factorial) {
        return 0;
    }
    return n * next_factorial;
}

















