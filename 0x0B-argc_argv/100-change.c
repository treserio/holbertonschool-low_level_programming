#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - cumulatively add all args
 * @argc: an int value defining the number of arguements passed into argv
 * @argv: an array of null-term str representing cmnd-line args
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i, sum, rest;

	/* confirm only one value was passed, rtrn 1 if > 1 */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* if value is negative print 0, rtrn 0 */
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}
	/* invalid value check */
	for (i = 1; argv[1][i]; ++i)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	sum = atoi(argv[1]) / 25;
	rest = atoi(argv[1]) % 25;
	sum += rest / 10;
	rest = rest % 10;
	sum += rest / 5;
	rest = rest % 5;
	sum += rest / 2;
	rest = rest % 2;
	sum += rest;

	printf("%d\n", sum);
	return (0);
}
