#include "main.h"
/**
 * _strlen - check
 *@dest : char
 *
 * Return: Always 0.
 */
int _strlen(char *dest)
{
	int i = 0;

	while (dest[i] != '\0')
	{
	i++;
	}
	return (i);
}

/**
 * str_concat - check
 *@s1 : char
 *@s2 : char
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int lar1 = _strlen(s1);
	int lar2 = _strlen(s2);
	char *s3;
	int i = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
		if (s2 == NULL)
	{
		s2 = "";
	}
	s3 = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lar1; i++)
	{
		s3[i] = s1[i];
	}
	for (i = 0; i < lar2; i++)
	{
		s3[lar1 + i] = s2[i];
	}
	s3[lar1 + lar2] = '\0';
	return (s3);
}
