#include <stdlib.h>
#include "lists.h"
/**
 * free_list - check the code
 *
 * Return: Always 0.
 */
void free_list(list_t *head) 
{
	list_t *node = head;
	list_t *next;

	while (node != NULL) 
	{
	next = node->next;
	free(node);
	node = next;
	}
}
