#include "main.h"
#include <stdio.h>
/**
 * _strcat - copies at most n characters from the string pointed to by src
 *@n : int
 *@src : char
 *@dest : char
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	dest[b] = src[b];
	for ( ; b < n; b++)
	dest[b] = '\0';

	return (dest);

}
