#include "dog.h"
#include <stdio.h>
/**
 * init_dog - check the code
 *@d: dog
 *@name: char
 *@age: float
 *@owner: char
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}

