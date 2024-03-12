#include "function_pointers.h"
/**
 * print_name - prints a name as is
 *@name: name
 *@f: ddf
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
