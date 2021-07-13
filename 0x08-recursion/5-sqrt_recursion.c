#include "holberton.h"

/**
 * _sqrt_recursion - finds the square root of num
 * @num: the number to find the square root of
 * Return: cumulative multiplication of 'num' 'exp' times
 */
int _sqrt_recursion(int num)
{
	return (sqrt_hlpr(num, 1, 1));
}

int sqrt_hlpr(int num, int div, int fact)
{
	if (num % 11 == 0)
		fact *= _sqrt_hlpr(num, num / 11, 11);
	else if (num % 7 == 0)
		fact *= _sqrt_hlpr(num, num / 7, 7);
	else if (num % 5 == 0)
		fact *= _sqrt_hlpr(num, num / 5, 5);
	else if (num % 3 == 0)
		fact *= _sqrt_hlpr(num, num / 3, 3);
	else if (num % 2 == 0)
		fact *= _sqrt_hlpr(num, num / 2, 2);	
	
	if (fact * fact == num)
		return (fact);
	else if (fact * fact > num)
		return (-1);
	else
		return (0);
}
