#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies the string pointed to by src
 *@src : char
 *@dest : char
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
int b;
	while (src[i] != '\0')
	i++;
	for (b = 0; b < i; b++)
	{
		dest[b] = src[b];
	}
	dest[b++] = '\0';
	return (dest);

}
