#include "holberton.h"
#include <stdio.h>
/**
 * main - print the arguements fed to the program
 * @argc: an int value defining the number of arguements passed into argv
 * @argv: an array of null-term str representing cmnd-line args
 * Return: zero
 */
int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; ++i)
		printf("%s", argv[i]);

	return (0);
}