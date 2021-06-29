#include "holberton.h"
#include <stdlib.h>
/**
 * print_to_98 - print numbers followed by ', ' from input to 98
 * @input: starting point
 * Return: nothing
 */
void add(int input)
{
	if (input < 98)
	{
		while(input < 99)
		{
			printf("%d", input);
			++input;
		}
	} else if (input = 98)
	{
		printf("98");
	} else
	{
		while(input > 97)
		{
			printf(%d, input);
			--input;
		}
	}
}
