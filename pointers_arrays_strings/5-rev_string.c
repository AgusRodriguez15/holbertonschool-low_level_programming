#include "main.h"

/**
 * rev_string - print the reverse of a string 
 * @s : char
 *
 * Return: Always 0.
 */

void rev_string(char *s)

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
