#include "holberton.h"
/**
 * rev_string - reverses the string fed it through pointer
 * @str: pointer to an int value to be reset
 * Return: void
 */
void rev_string(char *str)
{
	int length = 0;
	char *first = str;
	char temp;

	/* find the length */
	while (*str)
	{
		++str;
		++length;
	}
	--str;

	/* reverse the string */
	while (str > first)
	{
		temp = *str;
		*str = *first;
		*first = temp;
		++first;
		--str;
	}
}
