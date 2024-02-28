#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints its name, followed by a new line
 *@argc : char
 *@argv : char
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a = 0;
	int b = 0;
	int mul = 0;

	if (argc != 3)
	{
	printf("Error ");
	return (1);
	}
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;

		printf("%d\n", mul);
	}
return (0);
}
