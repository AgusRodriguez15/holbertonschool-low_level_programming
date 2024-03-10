#ifndef DOG_H
#define DOG_H
/**
 * struct dog - check the code
 * @name: char
 * @owner: char
 * @age: char
 *
 * Return: Always 0.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
