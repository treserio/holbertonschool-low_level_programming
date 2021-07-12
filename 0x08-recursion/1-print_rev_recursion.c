#include "holberton.h"
#include "stdio.h"
/**
 * _puts_recursion - replace dest with src string till end value
 * @spntr: pointer to the string we're wanting printed
 * Return: pointer to the destination
 */
void _puts_recursion(char *spntr)
{
	if (! *spntr)
		_putchar('\n');
	else
		_putchar(*spntr);
		_puts_recursion(++spntr);
}