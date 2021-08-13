#include "holberton.h"
/**
 * get_endianness - find the endianess of a system
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	unsigned int val = 10;

	val >>= 1;

	return (1 & val);
}