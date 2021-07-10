#include "holberton.h"
/**
 * print_chessboard - prints out a 8x8 board of chars
 * @arr: str to search
 * Return: void
 */
void print_chessboard(char (*arr)[8])
{
	int row, col;

	for (row = 0; row < 8; ++row)
	{
		for (col = 0; col < 8; ++col)
			_putchar(arr[row][col]);

		_putchar('\n');
	}
}
