#include "list.h"

void mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b)) {
    if (cmp == NULL || list == NULL || *list == NULL || del_data == NULL) {
        return;
    }
    t_list *temp = *list;
    t_list *prev = NULL;

    while (temp != NULL && cmp(temp->data, del_data)) {
        *list = temp->next;
        free(temp);
        temp = *list;
    }
    while (temp != NULL) {
        while (temp != NULL && !cmp(temp->data, del_data)) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            break;
        }
        if (prev != NULL) {
            prev->next = temp->next;
        }
        free(temp);
        temp = prev->next;
    }
}











