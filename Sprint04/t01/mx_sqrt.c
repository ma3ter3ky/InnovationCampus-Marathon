int mx_sqrt(int x) {
    if (x <= 0) {
        return 0;
    }
    int i = 1;
    while (i * i < x) {
        i++;
    }
    if (i * i == x) {
        return i;
    }
    else {
        return 0;
    }
}















