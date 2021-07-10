#include "holberton.h"
#include "stdio.h"
/**
 * set_string - sets the value of a pointer to a char
 * @to: place to send str
 * @str: string to send to @to
 * Return: void
 */
void set_string(char **str, char *to)
{
	*str = to;
}
