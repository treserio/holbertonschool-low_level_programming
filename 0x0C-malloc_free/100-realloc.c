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
	unsigned int size = 0, i, j, uac = ac;
	unsigned long buff = 0;
	char *res;

	res = malloc(buff);
	if (res == NULL)
		return (NULL);

	/* find the total size of all argvs */
	for (i = 0; i < uac; ++i)
		buff += strlen(av[i]);
	/* add values for new line chars */
	buff += ac;
	/* check buff size */
	printf("%lu", buff);
	buff = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < uac; ++i)
	{
		/* reassign NULL values to "" */
		if (av[i] == NULL)
			av[i] = "";

		/* cumulative malloc value */
		buff += strlen(av[i]) + 1;
		res = realloc(res, buff);

		for (j = 0; av[i][j]; ++j, ++size)
			res[size] = av[i][j];

		res[size] = '\n';
		++size;
	}
	res[size + 1] = '\0';
	return (res);
}
