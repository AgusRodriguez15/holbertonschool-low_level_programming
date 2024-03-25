#ifndef singly_linked_lists
#define singly_linked_lists

typedef struct list_l {
	char *str;
	size_t len;
	struct list_l *next;
} list_t;

size_t print_list(const list_t *h);
 
#endif
