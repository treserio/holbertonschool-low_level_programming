#include "lists.h"

/**
 * print_dlistint - print the n of linked list and return values in list
 * @node: node that was provided of linked list
 * Return: number of items in list
 */
size_t print_dlistint(const dlistint_t *node)
{
	size_t i = 0;

	for (; node->prev; node = node->prev)
	;
	for (; node; node = node->next, ++i)
		printf("%d\n", node->n);

	return (i);
}
