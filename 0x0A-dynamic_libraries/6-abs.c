#include "holberton.h"
/**
 * _abs - show the absolute value of the input
 * @num: number to check
 * Return: abs version of input
 */

int _abs(int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}
