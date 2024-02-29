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
	int i;
	int suma;

	if (argc == 1)
	{
	printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
	suma += atoi(argv[i]);
	}
	printf("%d\n", suma);
	}
	return (0);
}
