#include "search_algos.h"
/**
 * jump_list - search through sorted list using skip algorithm
 * @list: the head of the skip list to search
 * @size: the total number of nodes in the list
 * @value: the number to search for
 * Return: the node where the value was found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *run, *jumper;
	size_t cnt, exp, jump;
	/* initial check for list */
	if (!list)
		return (NULL);
	/* get our express value and total nodes, only use for total is in printing */
	exp = sqrt((double)size);
	for (run = list, jumper = list; 1; jumper = run)
	{
		if (run->index)
			printf("Value checked at index [%ld] = [%d]\n", run->index, run->n);
		/* jump if the value is lower */
		if (run->n < value)
		{
			jump = run->index;
			for (cnt = 0; cnt < exp && run->next; run = run->next, ++cnt)
			;
		}
		/* if we've exceeded the value or we've hit the end of the list */
		if ((run && run->n >= value) || !run->next)
			break;
	}
	printf("Value checked at index [%ld] = [%d]\n", run->index, run->n);
	/* fix final index printing if we're close */
	if (size - 1 < jump + exp)
		printf("Value found between indexes [%ld] and [%ld]\n", jump, size - 1);
	else
		printf("Value found between indexes [%ld] and [%ld]\n", jump, jump + exp);
	/* search within range for value */
	for (run = jumper; run && run->n != value; run = run->next)
		printf("Value checked at index [%ld] = [%d]\n", run->index, run->n);
	/* checker still wants print to show when value is found */
	if (run)
		printf("Value checked at index [%ld] = [%d]\n", run->index, run->n);
	return (run);
}
