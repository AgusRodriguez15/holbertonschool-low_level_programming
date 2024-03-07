#include "main.h"
/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(int nmemb, int size)
{
	int *a;

	if (nmemb < 0)
		return (NULL);
	if (size < 0)
		return (NULL);
	a = malloc(size);
	if (a == NULL)
		return (NULL);
	for (nmemb = 0; nmemb < size; nmemb++)
		a[nmemb] = 0;
	return (a);
}
