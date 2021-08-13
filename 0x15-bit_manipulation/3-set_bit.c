#include "holberton.h"
/**
 * set_bit - set the value of a bit at a certain index in val to 1
 * @val: the value to set the bit in
 * @index: the index of the bit to set
 * Return: the bit set at index of val or -1 if failed.
 */
int set_bit(unsigned long int *val, unsigned int index)
{
	if (index > 63)
		return (-1);
	*val |= (1 << index);
	return (1);
}
