#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - malloc a grid of int values height * width in dimensions
 * @ac: value from argc
 * @av: the number of rows of grid
 * Return: pointer to a compilation of argv strings
 */
char *argstostr(int ac, char **av)
{
	unsigned int size = 0, i, j;
	char *res;

	res = malloc(sizeof(char));

	if (ac == 0 || av == NULL)
		return (NULL);
	
	for(i = 0; i < ac; ++i)
	{
		/* reassign NULL values to "" */
		if (av[i] == NULL)
			av[i] == "";

		res = realloc(res, sizeof(char) * strlen(av[i]) + 1);

		for(j = 0; av[i][j]; ++j, ++size)
			res[size] = av[i][j];
	}

	res[size + 1] = '\0';
	return (res);
}