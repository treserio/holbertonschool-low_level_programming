#include "dog.h"
/**
 * new_dog - create a new dog struct and initialize it's values
 * @name: string for dog's name
 * @age: float value for age
 * @owner: string for owner's name
 * Return: pointer to dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog fido;
	
	fido = { name, age, owner }

	if (fido == NULL)
	{
		free(fido);
		return (NULL);
	}

	return (fido);
}
