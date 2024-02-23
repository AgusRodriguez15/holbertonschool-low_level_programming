#include "main.h"
/**
 * puts_half - function that prints half of a string
 *@str : char
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int a = 0;
	int b;

while (str[a] != '\0')
{
	a++;
}
if ((a % 2) != 0)
{
	a++;
}
b = a / 2;
while (str[b] != '\0')
{
	_putchar(str[b]);
b++;
}
_putchar('\n');
}


