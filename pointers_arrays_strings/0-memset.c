#include "main.h"
/**
 * *memset - fills memory with a constant byte
 * @s: char
 * @b: char
 * @n: int
 * Return: Nothing.
 */
char *_memset(char *s, char b, int n)
{
	 int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
