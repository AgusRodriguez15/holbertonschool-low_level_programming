#include "main.h"
/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
	int *a;
	int i = 0;
	int j = 0;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));
	for (i = min; i <= max; i++, j++)
		a[j] = i;
	return (a);
}

