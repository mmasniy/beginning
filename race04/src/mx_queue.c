#include "lib.h"

t_queue *mx_create_queue() {
	t_queue *new_queue = (t_queue *)malloc(sizeof(t_queue));

	if (new_queue)
		new_queue->head = new_queue->tail = NULL;
	return new_queue;
}

void mx_delete_queue(t_queue *queue) {
    mx_clear_queue(queue);
    free(queue);
}

void mx_clear_queue(t_queue *queue) {
    t_node *node = NULL;
	t_node *temp = NULL;

    if (queue) {
        node = queue->head;

        while(node) {
            temp = node;
            node = node->next;
            free(temp);
        }

        queue->head = queue->tail = NULL;
    }
}

void mx_push_back(t_queue *queue, t_node *node) {
    if (queue->tail) {
        queue->tail->next = node;
        queue->tail = node;
    }
    else
        queue->head = queue->tail = node;
}

t_node *mx_pop_front(t_queue *queue) {
    t_node *temp = queue->head;
    queue->head = queue->head->next;

    if (queue->head == NULL)
        queue->tail = NULL;
    return temp;
}
