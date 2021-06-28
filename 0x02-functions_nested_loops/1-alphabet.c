#include "holberton.h"
/**
 * print_alphabet - write the alphabet in lowercase
 *
 * Return: nothing (void)
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
