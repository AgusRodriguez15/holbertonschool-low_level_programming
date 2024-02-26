#include "main.h"

/**
 * rev_string - print the reverse of a string 
 * @s : char
 *
 * Return: Always 0.
 */

void rev_string(char *s)

{
int i = 0, b;
char c;

while (s[i] != '\0')
i++;
i--;

for (b = 0; b <= i / 2; b++)
{
c = s[b];
s[b] = s[i - b];
s[i - b] = b;

}
}
