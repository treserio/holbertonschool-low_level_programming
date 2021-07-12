#include "holberton.h"
/**
 * _pow_recursion - recursively find value of num^exp
 * @num: the number needing to be multiplied
 * @exp: the exponent value to take num to
 * Return: cumulative multiplication of 'num' 'exp' times
 */
int _pow_recursion(int num, int exp)
{
	if (exp < 0)
		return (-1);
	if (exp == 0)
		return (1);
	if (exp > 0)
		return (num * _pow_recursion(num, exp - 1));

	return (num);
}
