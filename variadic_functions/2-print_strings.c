#include "variadic_functions.h"
/**
 * print_strings - check the code
 *@separator: char
 *@n: unsigned int
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(args, char*);
	if (separator)
	{
	if (str == NULL)
		printf("nil");
	else if (i == n - 1)
	printf("%s", str);
	else
	printf("%s%s", str, separator);
	}
	else
	printf("%s", str);

	}
	printf("\n");
}
