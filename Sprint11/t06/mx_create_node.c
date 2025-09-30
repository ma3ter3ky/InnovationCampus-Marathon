#include "list.h"

t_list *mx_create_node(void *data) {
    t_list *root = malloc(sizeof(t_list));
    root->data = data;
    root->next = NULL;
    return root;
}






















