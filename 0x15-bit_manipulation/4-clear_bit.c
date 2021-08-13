#include "holberton.h"
/**
 * clear_bit - set the value of a bit at a certain index in val to 0
 * @val: the value to set the bit in
 * @index: the index of the bit to set
 * Return: the bit set at index of val or -1 if failed.
 */
int clear_bit(unsigned long int *val, unsigned int index)
{
	if (index > 63)
		return (-1);
	*val &= (0 << index);
	return (1);
}
