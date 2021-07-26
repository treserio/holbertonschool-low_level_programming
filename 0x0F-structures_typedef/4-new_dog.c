#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - create a duplicate array of str
 * @str: the string to copy
 * Return: pntr to dup, or NULL if str NULL or insufficient mem
 */
char *_strdup(char *str)
{
	unsigned int size = 0;
	char *arr;

	if (str == NULL)
		return (NULL);

	/* get size of str */
	while (str[size])
		++size;

	/* allocate memory for cpy buffer, size + 1 for NULL byte */
	arr = malloc(sizeof(char) * size + 1);

	if (arr != NULL)
	{
		/* repurpose size */
		size = 0;

		/* copy values over */
		while (str[size])
		{
			arr[size] = str[size];
			++size;
		}
		arr[size] = '\0';
		return (arr);
	}
	else
	{
		free(arr);
		return (NULL);
	}
}
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
		(*d).name = _strdup(name);
		if ((*d).name == NULL)
		{
			free(d);
			return (NULL);
		}
		(*d).age = age;
		if ((*d).age < 0)
		{
			free((*d).name);
			free(d);
			return (NULL);
		}
		(*d).owner = _strdup(owner);
		if ((*d).owner == NULL)
		{
			free((*d).name);
			free((*d).age);
			free(d);
			return (NULL);
		}
	}
}
/**
 * new_dog - create a new dog struct and initialize it's values
 * @name: string for dog's name
 * @age: float value for age
 * @owner: string for owner's name
 * Return: pointer to dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *fido = malloc(sizeof(struct dog));

	if (fido == NULL)
	{
		free(fido);
		return (NULL);
	}
	else
		init_dog(fido, name, age, owner);

	return (fido);
}
