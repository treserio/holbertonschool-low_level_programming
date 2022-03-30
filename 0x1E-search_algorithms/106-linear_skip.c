#include "search_algos.h"
/**
 * linear_skip - search through sorted list using skip algorithm
 * @list: the head of the skip list to search
 * @value: the number to search for
 * Return: the node where the value was found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *run, *jumper;
	size_t cnt, ttl, exp, jump;
	/* initial check for list */
	if (!list)
		return (NULL);
	for (run = list, cnt = 0; run; run = run->next, ++cnt)
	;
	/* get our express value and total nodes, only use for total is in printing */
	ttl = cnt;
	exp = sqrt((double)cnt);
	for (run = list, jumper = list; run; jumper = run)
	{
		if (run->index)
			printf("Value checked at index [%ld] = [%d]\n", run->index, run->n);
		/* jump if the value is lower */
		if (run->n < value)
		{
			jump = run->index;
			for (cnt = 0; cnt < exp && run; run = run->next, ++cnt)
			;
		}
		if (run && run->n >= value)
			break;
	}
	/* fix final index printing if we're close */
	if (ttl - 1 < jump + exp)
		printf("Value found between indexes [%ld] and [%ld]\n", jump, ttl - 1);
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
