#include "list.h"

int mx_list_size(t_list *list) {
    if (list == NULL) {
        return 0;
    }
    int size_of_list = 0;
    for (t_list *curr = list; curr != NULL; curr = curr->next) {
        size_of_list++;
    }
    return size_of_list;
}


















