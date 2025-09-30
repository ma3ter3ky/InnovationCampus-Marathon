#include "list.h"

void mx_clear_list(t_list **list) {
    t_list *curr = *list;
    while (curr != NULL) {
        t_list *tmp = curr;
        curr = curr->next;
        free(tmp);
    }
    *list = NULL;
}



















