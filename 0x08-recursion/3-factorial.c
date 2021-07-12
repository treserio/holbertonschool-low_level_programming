#include "holberton.h"
/**
 * factorial - find the factorial of a number
 * @num: the number to find the factoral of
 * Return: cumulative multiplication of every int below the initial call > 0
 */
int factorial(unsigned int num)
{
	if (num < 0)
		return (-1);
	if (num == 0)
		return (1);

	return num * factorial(num-1);
}