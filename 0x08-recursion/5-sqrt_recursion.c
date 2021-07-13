#include "holberton.h"
int sqrt_hlpr(int num, int root);

/**
 * _sqrt_recursion - finds the square root of num
 * @num: the number to find the square root of
 * Return: square root, or -1 if one doesn't exist
 */
int _sqrt_recursion(int num)
{
	return (sqrt_hlpr(num, 1));
}

/**
 * sqrt_hlpr - finds the square root of num
 * @num: the number to find the square root of
 * @root: the hopeful root of num
 * Return: square root, or -1 if one doesn't exist
 */
int sqrt_hlpr(int num, int root)
{
	if (root * root == num)
		return (root);
	else if (root * root > num)
		return (-1);
	else
		return (sqrt_hlpr(num, root + 1));
}
