#include <stdio.h>
/**
 * main - print agus
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
	if (a != 'e' && a != 'q')
	putchar(a);

	}
putchar('\n');
	return (0);
}
