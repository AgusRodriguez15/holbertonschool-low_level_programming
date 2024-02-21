#include "main.h"

void print_square(int size)
{
	if (size > 0)
	{
		int b;
		for (b = 0; b <= size; b++)
		{
			int c;
			for (c = 0; c <= size; c++)
				_putchar(23);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
