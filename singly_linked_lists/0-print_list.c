#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - check the code
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t cont = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
        printf ("[0] (nil)");
	}
	cont++;
	printf ("[%lu]  %s\n", h->len, h->str);
		 h = h->next;
	}
return (cont);
}



