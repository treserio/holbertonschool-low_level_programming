#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - print numbers followed by ', ' from input to 98
 * @input: starting point
 * Return: nothing
 */
void print_to_98(int input)
{
	if (input < 98)
	{
		while (input < 98)
		{
			printf("%d, ", input);
			++input;
		}
		printf("98");
	} else if (input == 98)
	{
		printf("98");
	} else
	{
		while (input > 97)
		{
			printf("%d, ", input);
			--input;
		}
		printf("98");
	}
}
