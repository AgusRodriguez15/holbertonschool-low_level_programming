#include <stdio.h>
/**
 * main - check the code for
 *
 * Return: Always 0.
 */
char *leet(char *str) 
{
	char *ptr = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "4433007711";
	int i = 0;

	for (; *ptr != '\0'; ptr++) {
 	for (i = 0; leet_chars[i] != '\0'; i++) {
	if (*ptr == leet_chars[i]) {
	*ptr = leet_replacements[i];
	break;
	}
	}
	}

	return str;
}


