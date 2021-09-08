#include "lists.h"
/**
 * print_dlistint - count the nodes
 * @node: starting node to print in list
 * Return: number of items in list
 */
size_t print_dlistint(const dlistint_t *node)
{
	size_t i = 0;

	for (; node->prev; node = node->prev)
	;

	for (; node; node = node->next, ++i)
	;

	return (i);
}
