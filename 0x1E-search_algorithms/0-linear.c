#include "search_algos.h"
/**
 * linear_search - run a linear sort
 * @array: the array of ints to sort
 * @size: the size of the array
 * @value: the number to search for
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	if (!value || !array)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			break;
	}

	if (i == size)
		return (-1);
	else
		return i;
}
