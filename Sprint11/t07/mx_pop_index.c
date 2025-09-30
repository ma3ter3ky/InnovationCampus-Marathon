#include "list.h"

void mx_pop_index(t_list **list, int index) {
    if (list == NULL || *list == NULL) {
        return;
    }
    if (index <= 0) {
        mx_pop_front(list);
    }

    t_list *curr = *list;
    t_list *temp = NULL;
    for (int i = 0; curr != NULL && curr->next != NULL && i < index - 1; i++) {
        curr = curr->next;
    }
    if (curr == NULL || curr->next == NULL) {
        mx_pop_back(list);
        return;
    }
    temp = curr->next;
    curr->next = temp->next;
    free(temp);
}







