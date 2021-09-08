#include "lists.h"
/**
 * free_dlistint - free the nodes of a dbl linked list
 * @node: node that was provided of linked list
 * Return: number of items in list
 */
void free_dlistint(dlistint_t *node)
{
	dlistint_t *eraser;

	for (; node && node->prev; node = node->prev)
	;
	for (; node; eraser = node, node = node->next, free(eraser))
	;
}
