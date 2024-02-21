#include "main.h"

void print_diagonal(int n)
{
	if (n > 0)
	{
		int b;
		for (b = 1; b <= n; b++)
		{
			int c;
			for (c = 1; c <= n; c++)
	_putchar('\\');
	_putchar('\n');
		}
	}
	_putchar('\n');
}
