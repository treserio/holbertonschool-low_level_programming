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
	unsigned long buff = 1;
	char *res, *temp;

	res = malloc(buff);

	if (ac == 0)
		return (NULL);

	for(i = 0; i < uac; ++i)
	{
		/* reassign NULL values to "" */
		if (av[i] == NULL)
			av[i] = "";

		/* cumulative malloc value */
		buff += strlen(av[i])+1;
		temp = realloc(res, buff);

		res = strcat(temp, res);

		printf("%lu/%s ", buff, res);

		for(j = 0; av[i][j]; ++j, ++size)
		{
			printf("%c, %u | ", av[i][j], size);
			res[size] = av[i][j];
			printf("%s\n", res);
		}
		res[++size] = '\n';
	    printf("%s\n", res);
	}

	res[size + 1] = '\0';
	printf("%s", res);
	return (res);
}
