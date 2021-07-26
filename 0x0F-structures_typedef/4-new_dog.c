#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog struct and initialize it's values
 * @name: string for dog's name
 * @age: float value for age
 * @owner: string for owner's name
 * Return: pointer to dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *fido = malloc(sizeof(struct dog));

	(*fido).name = name;
	(*fido).age = age;
	(*fido).owner = owner;

	if ((*fido).name == NULL || (*fido).age < 0 || (*fido).owner == NULL)
	{
		return (NULL);
	}

	return (fido);
}
