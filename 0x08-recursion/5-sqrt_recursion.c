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
	else if (num / (_sqrt_recursion(num/2)) == (_sqrt_recursion(num/2)))
		return (_sqrt_recursion(num/2));
}