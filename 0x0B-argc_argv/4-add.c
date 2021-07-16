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
	int i, j, sum = 0;

	for (i = 1; i < argc; ++i)
	{
		for (j = 0; argv[i][j]; ++j)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
