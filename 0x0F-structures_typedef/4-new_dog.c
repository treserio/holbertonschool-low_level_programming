#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a dog struct
 * @d: pointer the dog struct destination
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
/**
 * init_dog - initialize a dog struct
 * @d: pointer the dog struct destination
 * Return: void
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *fido;
	
	if (fido == NULL)
	{
		free(fido);
		return (NULL);
	}
	else
		init_dog(fido, name, age, owner);

	return (fido);
}