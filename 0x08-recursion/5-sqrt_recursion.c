#include "holberton.h"
/**
 * _sqrt_recursion - finds the square root of num
 * @num: the number to find the square root of
 * Return: cumulative multiplication of 'num' 'exp' times
 */
int _sqrt_recursion(int num)
{
	if (num == 1)
		return (1);
	else if (num % 2 == 0)
		return (2 * _sqrt_recursion(num / 2));
	else if (num % 3 == 0)
		return (3 * _sqrt_recursion(num / 3));
	else if (num % 5 == 0)
		return (5 * _sqrt_recursion(num / 5));
	else if (num % 7 == 0)
		return (7 * _sqrt_recursion(num / 7));
	else if (num % 11 == 0)
		return (11 * _sqrt_recursion(num / 11));
	else
		return (-1);
}