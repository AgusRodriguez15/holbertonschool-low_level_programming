#ifndef singly_linked_lists
#define singly_linked_lists
/**
 * struct list_l - check the code
 *@str: string
 *@len: largo
 *@next: next
 * Return: Always 0.
 */
typedef struct list_l
{
	char *str;
	size_t len;
	struct list_l *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif
