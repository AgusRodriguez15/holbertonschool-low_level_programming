#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * list_len - check the code
 * @h: puntero a la lista
 *
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
	h = h->next;
	cont++;
	}
	return (cont);
}
