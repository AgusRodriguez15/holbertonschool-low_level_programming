#include "main.h"
#include <stdio.h>
/**
 * main - check the code for
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0){
		printf("E\n");
		return;
	}

	for (i = 0; i < n -1; i++)
	{
		printf("%d, ", a[i]);
		
}
printf("%d\n", a[n-1]);

}
