#include "lists.h"

/**
 * print_listint - print the str of linked list and return values in list
 * @node: starting node to print in list
 * Return: number of items in list
 */
size_t print_listint(const listint_t *node)
{
	size_t i = 0;

	while (node)
	{
		++i;
		node = (*node).next;
	}

	return (i);
}
