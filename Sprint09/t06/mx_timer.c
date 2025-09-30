#include <time.h>

double mx_timer(void (*f)()) {
    if (!f) {
        return -1;
    }
    clock_t start_time, end_time;
    double time_used;
    start_time = clock();
    f();
    end_time = clock();
    if (end_time == (clock_t)-1 || start_time == (clock_t)-1) {
        return -1;
    }
    time_used = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
    return time_used;
}













