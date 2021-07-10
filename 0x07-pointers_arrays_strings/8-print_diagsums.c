#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the summation of Diagonal right, diag left values
 * @ar: pointer to two dimensional array of size sz
 * @sz: size of two dimensional array
 * Return: void
 */
void print_diagsums(int *ar, int sz)
{
	int col;
	int dr = 0, dl = 0;

	for (col = 0; col < sz; ++col)
	{
		dr += ar[col];
		dl += ar[sz - col - 1];
		ar += sz;
	}
	printf("%u, %u\n", dr, dl);
}
