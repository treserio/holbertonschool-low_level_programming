#include "lists.h"
/**
 * free_list - free all elements of a list
 * @node: starting node in list
 * Return: void
 */
void free_list(list_t *head)
{
	unsigned int i = 0, j;
	list_t *start = malloc(sizeof(list_t));

	if (!start)
		return (NULL);

	start = head;

	/* find how many nodes */
	while (head)
	{
		++i;
		head = head->next;
	}

	for (; i > 0; --i)
	{
		head = start;
		for (j = 0; j < i; ++j)
			head = head->next;

		free(head->str);
		free(head->len);
		free(head->next);
	}
}