#include "lib.h"

t_node *mx_create_node(int x, int y, int prev_step) {
    t_node *new_node = (t_node *)malloc(sizeof(t_node));

    if (new_node) {
        new_node->x = x;
        new_node->y = y;
        new_node->prev_step = prev_step;
        new_node->next = NULL;
    }
    return new_node;
}
