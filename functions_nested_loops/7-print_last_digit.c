#include "main.h"

int print_last_digit(int n)
{
	int ul = n % 10;

	_putchar(ul + '0');

	return (ul);
}

