#include "main.h"
#include <stdlib.h>
/**
 * _strle - returns length of a string
 *@a : int
 *  *_strdup - returns a pointer to a newly allocated space in memory
 *@i : int
 *@b : int
 *@copy : char
 *
 * Return: Always 0.
 */
int _strle(char *copy)
{
	int a;

	while (copy[a] != '\0')
	{
	a++;
	}
	return (a);
}

char *_strdup(char *str)
{
	int i = 0;
	int b;
	char *copy = 0;

	if (str == NULL)
	{
	return (NULL);
	}
	copy = malloc(sizeof(char) * _strle(str) + 1);
	if (copy == NULL)
	{
	return (NULL);
	}
	while (str[i] != '\0')
	i++;
	for (b = 0; b < i; b++)
	{
	copy[b] = str[b];
	}
	copy[b++] = '\0';
	return (copy);
}

