#include "holberton.h"
/**
 * _print_rev_recursion - print a string in reverse using a pointer and recurs
 * @str: pointer to the string we're wanting printed
 * Return: void
 */
void _print_rev_recursion(char *str)
{
	if (*str)
	{
		_print_rev_recursion(++str);
		--str;
		_putchar(*str);
	}
}
