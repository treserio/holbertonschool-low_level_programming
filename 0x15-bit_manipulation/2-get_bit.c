#include "holberton.h"
/**
 * get_bit - find the value of a bit at a certain index in val
 * @val: the value to examine the bit
 * @index: the index of the bit to check
 * Return: the bit set at index of val or -1 if failed.
 */
int get_bit(unsigned long int val, unsigned int index)
{
	if (index > 63)
		return (-1);
	val = val >> index;
	return (1 & val);
}
