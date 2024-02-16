#include <stdio.h>
/**
 * main - print agus
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

        char num;
	char let;
	for (num = 0; num <= 9; num++)
        putchar((num % 10) + '0');

	for (let = 'a'; let <= 'f'; let++)
		  putchar(let);
putchar('\n');
        return (0);
}
