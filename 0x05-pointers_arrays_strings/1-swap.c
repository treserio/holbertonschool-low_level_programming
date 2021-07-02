#include "holberton.h"
/**
 * reset_to_98 - swap 2 values through pointers
 * @thing1: pointer to an int value
 * @thing2: pointer to an int value
 * Return: void
 */
void swap_int(int *thing1, int *thing2)
{
	int holder = *thing1;
	*thing1 = *thing2;
	*thing2 = holder;
}