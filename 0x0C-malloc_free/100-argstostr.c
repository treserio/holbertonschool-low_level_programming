#include "holberton.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * argstostr - malloc a grid of int values height * width in dimensions
 * @ac: value from argc
 * @av: the number of rows of grid
 * Return: pointer to a compilation of argv strings
 */
char *argstostr(int ac, char **av)
{
	int i;
	unsigned long buff = 0;
	char *res;

	/* initial input check */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* find the total size of all argvs */
	for (i = 0; i < ac; ++i)
		buff += strlen(av[i]);
	/* add values for new line chars, and null byte */
	buff += ac + 1;

	/* allocate total buffer */
	res = malloc(buff);
	/* check for init of buffer */
	if (res == NULL)
		return (NULL);

	/* strcat values to buffer, then \n */
	for (i = 0; i < ac; ++i)
	{
		res = strcat(res, av[i]);
		res = strcat(res, "\n");
	}

	return (res);
}
