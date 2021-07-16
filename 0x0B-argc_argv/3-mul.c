#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply 2 values input through arguements
 * @argc: an int value defining the number of arguements passed into argv
 * @argv: an array of null-term str representing cmnd-line args
 * Return: zero
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", (atoi(argv[argc - 2]) * atoi(argv[argc - 1])));
	return (0);
}
