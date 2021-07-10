#include "holberton.h"
/**
 * _strstr - returns pointer to first occurance of substring needle in haystack
 * @arr: str to search
 * @needle: substr to locate
 * Return: Pointer to beginning of substr or null
 */
void print_chessboard(char (*arr)[8]);
{
	int row, col;

	for (row = 0; row < 8; ++row)
	{
		for (col = 0; col < 8; ++col)
			_putchar(arr[row][col]);

		_putchar('\n');
	}
}