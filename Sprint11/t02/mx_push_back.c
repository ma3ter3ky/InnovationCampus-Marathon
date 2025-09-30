#include "list.h"

void mx_push_back(t_list **list, void *data) {
    if (*list == NULL) {
        *list = mx_create_node(data);
        return;
    }
    t_list *new_node = malloc(sizeof(t_list));
    new_node->data = data;

    t_list *curr = *list;
    while (curr->next!= NULL) {
        curr = curr->next;
    }
    curr->next = new_node;
}














