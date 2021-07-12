#include "holberton.h"
/**
 * _puts_rev_recursion - print a string in reverse using a pointer and recurs
 * @spntr: pointer to the string we're wanting printed
 * Return: void
 */
void _puts_rev_recursion(char *spntr)
{
	if (!*spntr)
		_puts_rev_recursion(++spntr);

	--spntr;
	_putchar(*spntr);
}
