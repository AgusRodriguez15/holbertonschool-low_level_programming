#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_dlistint - check the code
 * @h: puntero a la lista
 *
 * Return: Always 0.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	cont++;
	}
	return (cont);
}

