#include "main.h"
/**
 * _strcmp -  compares two strings
 *@s1 : char
 *@s2 : char
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{

	 int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
	i++;
	}
	return (s1[i] - s2[i]);
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else if (s1[i] == '\0')
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
