#include "holberton.h"
/**
 * puts2 - reverses the string fed it through pointer
 * @str: pointer to a string
 * Return: void
 */
void puts2(char *str)
{
	int ltr = 0;

	/* while string print every other char */
	while(*str)
	{
		if (! (ltr % 2))
		{
			_putchar(*str);
		}
		++ltr;
		++str;
	}
}
