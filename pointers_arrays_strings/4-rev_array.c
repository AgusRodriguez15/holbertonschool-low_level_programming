#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int b, i;

	for (i = 0; i < n / 2; i++)
	{
	b = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = b;
	}


}
