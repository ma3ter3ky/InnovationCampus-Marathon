#include "list.h"

void mx_push_index(t_list **list, void *data, int index) {
    if (list == NULL) {
        return;
    }
    if (*list == NULL || index <= 0) {
        mx_push_front(list, data);
        return;
    }
    t_list *curr = *list;
    for (int i = 0; curr->next != NULL && i < index - 1; i++) {
        curr = curr->next;
    }

    if (curr->next == NULL) {
        mx_push_back(list, data);
        return;

    }
    t_list *new_node = mx_create_node(data);
    new_node->next = curr->next;
    curr->next = new_node;
}






