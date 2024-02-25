#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatenetes the string pointed to by src
 *_strlen - calculates the length of dest
 *@src : char
 *@dest : char
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int b;
size_t c =  _strlen(dest);

	while (src[i] != '\0')
	i++;
	for (b = 0; b < i; b++)
	{
	dest[c + b] += src[b];
	}
	dest[c + b] = '\0';
	return (dest);

}

int _strlen(char *dest)
{
	int i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	return (i);
}
