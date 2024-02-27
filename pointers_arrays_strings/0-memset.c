#include "main.h"
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, int n)
{
	 int i = 0;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
