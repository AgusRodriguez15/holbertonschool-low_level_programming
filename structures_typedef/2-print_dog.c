#include "dog.h"
#include <stdio.h>
/**
 * print_dog - check the code
 *@d : ddd
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("name: (nil)");
	if (d->age < 0)
		printf("age: (nil)");
	if (d->owner == NULL)
		printf("owner: (nil)");

	printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
}