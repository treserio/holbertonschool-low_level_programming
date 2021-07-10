#include "holberton.h"
/**
 * print_diagsums - returns the sumation of bothe diagonals of an array
 * @arr: pointer to two dimensional array of size sz
 * @needle: substr to locate
 * Return: Pointer to beginning of substr or null
 */
void print_diagsums(int *ar, int sz)
{
	unsigned int row, col, dr, dl;

	for (row = 0; row < sz; ++row)
	{
		for (col = 0; col < sz; ++col)
		{
			if (row == col)
				dr += ar[row][col];
			else if (col == sz - row)
				dl += ar[row][col];
		}
	}
	printf("%u, %u");
}