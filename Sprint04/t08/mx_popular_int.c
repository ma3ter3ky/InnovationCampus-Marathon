int mx_popular_int(const int *arr, int size) {
    int max_Count = 0;
    int most_popular = 0;
    for (int i = 0; i < size; i++) {
        int counter = 1;
        int current_number = arr[i];
        for (int j = i + 1; j < size; j++) {
            if (current_number == arr[j]) {
                counter++;
            }
        }
        if (counter > max_Count) {
            max_Count = counter;
            most_popular = current_number;
        }
    }
    return most_popular;
}












