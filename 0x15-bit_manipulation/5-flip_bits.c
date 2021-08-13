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
	unsigned long int dif = num1 ^ num2;

	for (; dif > 0; dif &= (dif - 1))
		count++;

	return (count);
}
