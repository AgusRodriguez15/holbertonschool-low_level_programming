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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
