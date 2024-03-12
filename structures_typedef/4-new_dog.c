#include "dog.h"
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
int b;
        while (src[i] != '\0')
        i++;
        for (b = 0; b < i; b++)
        {
                dest[b] = src[b];
        }
        dest[b++] = '\0';
        return (dest);

}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
		free(new_dog);
	}
	new_dog->name = name;
    	new_dog->owner = owner;
	 new_dog->age = age;
	 return (new_dog);
}
