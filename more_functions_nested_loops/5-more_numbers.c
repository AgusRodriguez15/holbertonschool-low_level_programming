#include "main.h"

void more_numbers(void)
{
	int a;
	int b = 0;

	for (; b < 10; b++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
				_putchar('0' + a / 10);  
			
			_putchar('0' + a % 10);
		}
	
			
	_putchar('\n');
	}

}	
