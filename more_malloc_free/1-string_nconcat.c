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
 * main - check the code
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, int n)
{
	char *s3;
	int i = 0;
	int lar1;
	

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lar1 = _strlen(s1);
	s3 = malloc(sizeof(char) * (lar1 + n + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; i <= lar1; i++)
		s3[i] = s1[i];
	for (i = 0; i < n; i++)
		s3[lar1 + i] = s2[i];
	s3[lar1 + n] = '\0';
	return (s3);
}

