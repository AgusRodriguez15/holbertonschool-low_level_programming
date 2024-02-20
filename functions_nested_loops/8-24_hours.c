#include "main.h"

void jack_bauer(void)
{
	int H;
	int M;

	for (H = 0; H <= 23; H++)
	       for (M = 0; M <= 59; M++)
		       _putchar(H + '0');
	_putchar(M + '0');
	_putchar('\n');
}
