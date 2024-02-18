#include "main.h"
/**
 * main - print agus
 *
 * Return: Always 0 (Success)
 */


void print_alphabet_x10(void)
{

        char a = 97;
	int j;

        while (a <= 122)
        { 
        a++;

        }
	for (j = 0; j < 10; j++)
	{
		  _putchar(a);
	}
        _putchar('\n');

}
