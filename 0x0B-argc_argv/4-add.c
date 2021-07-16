#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - cumulatively add all args
 * @argc: an int value defining the number of arguements passed into argv
 * @argv: an array of null-term str representing cmnd-line args
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int sum, use_argc = argc;

	++argv;
	while(*argv)
	{
		/* doesn't consider a zezo value input */
		if (atoi(*argv))
			sum += atoi(*argv);
		else
		{
			printf("Error\n");
			return (1);
		}
		++argv;
	}

	printf("%d", sum);
	return (0);
}
