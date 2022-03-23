#include "search_algos.h"
/**
 * advanced_binary - find first instance of val in sorted array
 * @array: the array of ints to sort
 * @size: the size of the array
 * @value: the number to search for
 * Return: index of val if found else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	/* exit conditions */
	if (!value || !array)
		return (-1);

	return (b_split(array, 0, size - 1, value));
}

/**
 * b_split - split the array around the mid point to find the value
 * @array: the array of ints to sort
 * @st: the starting index of the split
 * @end: the final index of the split
 * @val: the number to search for
 * Return: index of val if found else -1
 */
int b_split(int *array, size_t st, size_t end, int val)
{
	size_t mid;
	/* printf("st=%ld end=%ld val=%d\n", st, end, val); */
	/* print our array */
	printf("Searching in array: ");
	p_array(array, st, end);
	/* exit case for unfound */
	if (st == end && array[st] == val)
		return (st);
	else if (st == end)
		return (-1);
	/* find our mid point */
	mid = mid_point(st, end);
	/* compare mid vs our value */
	if (array[mid] == val)
	{
		/* return first check, confirm first value in the set */
		if (end - st < 2)
			return (first_idx(array, st, end, val));
	}
	else if (array[mid] < val)
		return (b_split(array, mid + 1, end, val));

	return (b_split(array, st, mid, val));
}

/**
* mid_point - find the mid point of an intiger, will round down for odd number
* @low: the low value to find a mid point between
* @high: the high value to find a mid point between
* Return: the mid point of the number
*/
size_t mid_point(size_t low, size_t high)
{
	size_t mid;

	mid = low + (high - low) / 2;

	return (mid);
}

/**
* p_array - print the given array from idx to end
* @array: pointer to the beginning of the array to print from
* @idx: the starting index to print from
* @end: the final index to print
*/
void p_array(int *array, size_t idx, size_t end)
{
	for (; idx < end; ++idx)
	{
		printf("%d", array[idx]);
		printf(", ");
	}
	printf("%d\n", array[idx]);
}

/**
 * first_idx - find the first occurance of our value at a certain depth
 * @array: the array of ints to sort
 * @st: the starting index of the split
 * @end: the final index of the split
 * @val: the number to search for
 * Return: index of val if found else -1
 */
int first_idx(int *array, size_t st, size_t end, int val)
{
	if (array[st] == val)
		return (st);
	else if (st == end)
		return (-1);

	return (first_idx(array, st + 1, end, val));
}
