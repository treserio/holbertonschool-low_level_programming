#include "holberton.h"
/**
 * main - write the alphabet in lowercase
 *
 * Return: zed
 */

void print_alphabet(void)
{
	int i;
	for (i = 97; i <= 122; ++i)
	{
		_putchar(i);
	}
	_putchar('\n');
}
