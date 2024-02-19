#include "main.h"

int print_last_digit(int n)
{
	int ul = n % 10;

	
	_putchar(ul + '0');
	if (ul < 0)
		ul = -ul;

	return (ul);
}

