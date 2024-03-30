#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - check the code
 * @h: puntero a la lista
 *
 * Return: Always 0.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
	h = h->next;
	cont++;
	}
	return (cont);
}
