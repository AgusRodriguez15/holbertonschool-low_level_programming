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
int i;
	
	while (src[i] != '\0')
	{
	i++;
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
