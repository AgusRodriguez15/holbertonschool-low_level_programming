#include "main.h"
/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)	
{
	char *a;
	unsigned int i = 0;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	a = malloc(size * nmemb);
	
	if (a == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		a[i] = '\0';
	}
	return a;
}
