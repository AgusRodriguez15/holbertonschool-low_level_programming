#include "main.h"
/**
 * print_line - prints the _ depends of n
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	if (n > 0)
	{
		int b;

		for (b = 1; b <= n; b++)
		{
		_putchar('_');
		}
	}
		_putchar('\n');
}
