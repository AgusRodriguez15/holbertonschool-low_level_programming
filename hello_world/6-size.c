#include <stdio.h>
/**
 * main - print agus
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char p;
	int j;
	long int d;
	long long int e;
	float f;

	printf("Size of a char: %ld\n byte(s)", sizeof(p));
	printf("Size of an int: %ld\n byte(s)", sizeof(j));
	printf("Size of a long int: %ld\n byte(s)", sizeof(d));
	printf("Size of a long long int: %ld\n byte(s)", sizeof(e));
	printf("Size of a float: %ld\n byte(s)", sizeof(f));

	return (0);
}
