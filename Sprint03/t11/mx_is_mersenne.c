#include <stdbool.h>

bool mx_is_prime(int num);

bool IsPowerOfTwo(int x) {
    return (x > 0) && ((x & (x - 1)) == 0);
}

bool mx_is_mersenne(int n) {
    return (mx_is_prime(n) && IsPowerOfTwo(n + 1));
}



















