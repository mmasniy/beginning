#ifndef structs_h
#define structs_h

typedef struct s_node {
	struct s_node *next;
	int prev_step;
	int x;
	int y;
} t_node;

typedef struct s_queue {
	t_node *head;
	t_node *tail;
} t_queue;

typedef struct s_map {
	t_queue *queue;
	char **map;
	int **path;
	int size_x;
	int size_y;
} t_map;

t_node *mx_create_node(int x, int y, int prev_step);
t_map *mx_create_map(char *file, int x, int y);
t_queue *mx_create_queue();

void mx_delete_map(t_map *map);
void mx_delete_queue(t_queue *queue);
void mx_clear_queue(t_queue *queue);

void mx_push_back(t_queue *queue, t_node *node);
t_node *mx_pop_front(t_queue *queue);

#endif
