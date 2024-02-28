#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 *@s : char
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
	{
		int i = 0;
	if (*s <= '\0')
	{
		i++;
		return (i);
	}
	_putchar(*s);
	_strlen_recursion(s + 1);
	return (i);
	}
