#include "list.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
    if (cmp == NULL || list == NULL) {
        return list;
    }
    int size_of_list = 0;
    for (t_list *temp = list; temp != NULL; temp = temp->next) {
        size_of_list++;
    }

    for (int i = 0; i < size_of_list - 1; i++) {
        t_list *element = list;
        for (int j = 0; j < size_of_list - i - 1; j++) {
            if (cmp(element->data, element->next->data)) {
                void *data = element->data;
                element->data = element->next->data;
                element->next->data = data;
            }
            element = element->next;
        }
    }
    return list;
}






