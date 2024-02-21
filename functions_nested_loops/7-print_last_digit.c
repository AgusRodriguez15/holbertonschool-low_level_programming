#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int ul = n % 10;

	if (ul < 0)
	ul = -ul;
	_putchar(ul + '0');
	return (ul);
}

