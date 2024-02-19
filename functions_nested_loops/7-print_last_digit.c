#include "main.h"

int print_last_digit(int n)
{
	int ul = n % 10;

	
			if (ul < 0)
		ul = -ul;
	_putchar(ul + '0');
	return (ul);
}

