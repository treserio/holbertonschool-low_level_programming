#include "holberton.h"
/**
 * _strlen_recursion - return the length of a string
 * @str: pointer to the string we're wanting printed
 * Return: int i with a cumulative value from the str_len
 */
int _strlen_recursion(char *str)
{
	int i = 0;

	if (*str)
	{
		++i;
		i += _strlen_recursion(++str);
		return (i);
	}

	return (0);
}
