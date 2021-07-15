#include "holberton.h"
#include <stdio.h>
/**
 * main - print the number of arguements fed to the porgram
 * @argc: an int value defining the number of arguements passed into argv
 * @argv: an array of null-term str representing cmnd-line args
 * Return: zero
 */
int main(int argc, char *argv[])
{
	argv[1] = "thing";
	printf("%d\n", argc - 1);
	return (0);
}
