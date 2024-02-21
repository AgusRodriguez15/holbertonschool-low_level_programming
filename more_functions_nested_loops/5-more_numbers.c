#include "main.h"


/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int a;
	int b = 0;

	for (; b < 10; b++)
	{
	for (a = 0; a < 15; a++)
		{
	if (a > 9)
	_putchar('0' + a / 10);
	_putchar('0' + a % 10);
	}
	_putchar('\n');
	}
}
