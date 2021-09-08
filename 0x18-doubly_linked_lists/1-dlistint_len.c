#include "lists.h"
/**
 * dlistint_len - count the nodes
 * @node: starting node to print in list
 * Return: number of items in list
 */
size_t dlistint_len(const dlistint_t *node)
{
	size_t i = 0;

	for (; node && node->prev; node = node->prev)
	;
	for (; node; node = node->next, ++i)
	;

	return (i);
}
