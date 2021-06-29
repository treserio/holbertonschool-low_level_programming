#include "holberton.h"
/**
 * print_last_digit - grab the last digit of a number
 * @num: number to be checked
 * Return: the last num of a number
 */
int print_last_digit(int num)
{
	int last;

	last = abs(num % 10);
	_putchar(last + '0');
	return (last);
}
