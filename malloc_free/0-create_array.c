#include "main.h"
#include <stdlib.h>
/**
 * *create_array - prints buffer in hexa
 * @size: unsigned int
 * @c: char
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = (char *)malloc(size * sizeof(char));
		if (a == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			i++;
			a[i] = c;
		}
	return (a);
}


