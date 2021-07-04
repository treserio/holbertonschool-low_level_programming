#include "holberton.h"
/**
 * print_array - prints x elements in an array
 * @ar: pointer to an array
 * @end: the last value of the array to print
 * Return: void
 */
void print_array(int *ar, int *end)
{
	int size = 0, start;

	while (ar[size])
		++size;

	for (start = 0; start < end && start < size;  start++)
		printf("%d", ar[start]);

	_putchar('\n');
}
