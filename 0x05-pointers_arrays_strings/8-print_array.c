#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_array - prints x elements in an array
 * @ar: pointer to an array
 * @end: the last value of the array to print
 * Return: void
 */
void print_array(int *ar, int end)
{
	int start;

	for (start = 0; start < end;  start++)
	{
		printf("%d", ar[start]);
		if (start < end - 1)
			printf(", ");
	}

	printf("\n");
}
