#include "main.h"
/**
 * *_memcpy - copies memory area.
 * @dest: char
 * @src: char
 * @n : int
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	dest[b] = src[b];
	for ( ; b < n; b++)
	dest[b] = '\0';

	return (dest);
}
