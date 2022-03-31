#include "search_algos.h"
/**
 * linear_skip - search through sorted list using skip algorithm
 * @list: the head of the skip list to search
 * @value: the number to search for
 * Return: the node where the value was found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *run, *hold, *last;
	int found = 0;
	/* initial check for list */
	if (!list)
		return (NULL);
	/* run through list using express pointer */
	for (run = list, hold = list; run;
		run = run->express)
	{
		if (run->index)
			printf("Value checked at index [%ld] = [%d]\n", run->index, run->n);
		/* last_idx if the value is lower */
		if (run->n < value)
			hold = run;
		if (run->n >= value)
			break;
	}
	last = run;
	if (run)
		printf("Value found between indexes [%ld] and [%ld]\n",
			hold->index, run->index);
	else
	{
		for (run = hold; run->next; run = run->next)
		;
		printf("Value found between indexes [%ld] and [%ld]\n",
			hold->index, run->index);
	}
	for (run = hold; run && run != last; run = run->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", run->index, run->n);
		if (value == run->n)
		{
			++found;
			break;
		}
	}
	if (found)
		return (run);
	return (NULL);
}
