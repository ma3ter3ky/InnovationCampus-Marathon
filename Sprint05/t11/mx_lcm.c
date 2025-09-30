int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;
    }
    if (a < 0) {
        a = -a;
    }
    if (b < 0) {
        b = -b;
    }
    return (a / mx_gcd(a, b)) * b;
}
















