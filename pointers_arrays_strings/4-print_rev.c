#include "main.h"

/**
 *print_rev - print a string in reverse
 *@s : char
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
int i = 0;
int b;
while (s[i] != '\0')
i++;
for (b = i - 1; b >= 0; b--)
{
_putchar(s[b]);
}
_putchar('\n');
}
