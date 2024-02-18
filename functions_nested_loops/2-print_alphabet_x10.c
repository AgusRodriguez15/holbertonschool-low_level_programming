#include "main.h"
/**
 * main - print agus
 *
 * Return: Always 0 (Success)
 */


void print_alphabet_x10(void)
{
char i = 'a';
char j;
	for (i = 'a'; i < 'z'; i++){
i = 'a' +i;

for(j = 0; j < 10; j++){
	_putchar(i);
}
_putchar(i);


}
}
