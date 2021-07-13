#include "holberton.h"
#include <stdlib.h>
#include <time.h>
/**
 * _sqrt_recursion - finds the square root of num
 * @num: the number to find the square root of
 * Return: cumulative multiplication of 'num' 'exp' times
 */
int _sqrt_recursion(int num)
{
	int root = 0;

	if (num == 1)
		return (1);
	else if (num % 11 == 0)
	{
		root = 11 * (_sqrt_recursion(num / 11));
		if (root * root < num);
			return (root);
	}
	else if (num % 7 == 0)
	{
		root = 7 * (_sqrt_recursion(num / 7));
		if (root * root < num);
			return (root);
	}
	else if (num % 5 == 0)
	{
		root = 5 * (_sqrt_recursion(num / 5));
		if (root * root < num);
			return (root);
	}		
	else if (num % 3 == 0)
	{
		root = 3 * (_sqrt_recursion(num / 3));
		if (root * root < num);
			return (root);
	}		
	else if (num % 2 == 0)
	{
		root = 2 * (_sqrt_recursion(num / 2));
		if (root * root < num);
			return (root);
	}		

	if (root * root == num)
		return (root);
	else if (root * root > num)
		return (-1);
	else
		return (1);
}
