#include "main.h"
#include <stdio.h>
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
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
				}
return (0);
}
