#include "dog.h"
#include "stdlib.h"
#include "stdio.h"
/**
 * init_dog - initialize a dog struct
 * @d: pointer the dog struct destination
 * Return: void
 */
void print_dog(struct dog *d)
{
	char * nm, * ow;

	if (d == NULL)
		exit (1);
	
	if ((*d).name == NULL)
		nm = ("nil");
	else
		nm = (*d).name;

	if ((*d).owner == NULL)
		ow = ("nil");
	else
		ow = (*d).name;
	
	printf("Name: %s\nAge: %f\nOwner: %s\n", nm, d->age, ow);
}
