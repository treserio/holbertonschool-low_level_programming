#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - returns the sumation of bothe diagonals of an array
 * @arr: pointer to two dimensional array of size sz
 * @needle: substr to locate
 * Return: Pointer to beginning of substr or null
 */
void print_diagsums(int *ar, int sz)
{
	int col;
	unsigned int dr = 0, dl = 0;

	for (col = 0; col < sz; ++col)
	{
		dr += a[col];
		dl += a[sz-col-1];
		a += sz;
	}
	printf("%u, %u", dr, dl);
}
