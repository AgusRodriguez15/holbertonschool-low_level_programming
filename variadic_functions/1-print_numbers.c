#include "variadic_functions.h"
/**
 * print_numbers - check the code
 *@separator: char
 *@n: unsigned int
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int num = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
	if (separator)
	{
		if (i == n - 1)
			printf("%d", num);
		else
			 printf("%d%s", num, separator);
	}
	else
		printf("%d", num);

	}
	printf("\n");
}

