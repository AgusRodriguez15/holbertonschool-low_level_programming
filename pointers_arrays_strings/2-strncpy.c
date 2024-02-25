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
char *_strncpy(char *dest, char *src, int n)
{
        int b;

          for (b = 0; b < n && src[b] != '\0'; b++)
	dest[b] = src[b];
	 for ( ; b < n; b++)
        dest[b] = '\0';

        return (dest);

}
