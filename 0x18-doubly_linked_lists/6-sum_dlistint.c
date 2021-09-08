#include "lists.h"
/**
 * sum_dlistint - count the nodes
 * @node: node in a linked list
 * Return: sum of all values
 */
int sum_dlistint(dlistint_t *node)
{
	int i = 0;

	for (; node && node->prev; node = node->prev)
	;
	for (; node; i += node->n, node = node->next)
	;

	return (i);
}
