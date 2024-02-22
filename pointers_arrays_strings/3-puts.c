#include "main.h"

/**
 * _puts - print a string
 *@str : char
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
int i = 0;
int b;
while (str[i] != '\0')
i++;
for (b = 0; b < i; b++)
{
_putchar(str[b]);
}
_putchar('\n');
}
