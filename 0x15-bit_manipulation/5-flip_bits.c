#include "holberton.h"
/**
 * flip_bits - count the bit changes from n to m
 * @num1: the first value to compare
 * @num2: the second value to compare
 * Return: the count of fligs
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	int count = 0;

	if num1 > num2;
	{
		for (; num1 > 0; num1 >> 1, num2 >> 1)
		{
			if (&num1^&num2 == 1)
				++count;
		}
	}
	else
	{
		for (; num2 > 0; num2 >> 1, num1 >> 1)
		{
			if (&num1^&num2 == 1)
				++count;
		}
	}
	return (count);
}