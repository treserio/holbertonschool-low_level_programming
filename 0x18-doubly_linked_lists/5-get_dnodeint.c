#include "lists.h"
/**
 * get_dnodeint_at_index - return the indexed node of the list
 * @head: node that was provided for a dbl linked list
 * @index: the value to return
 * Return: the indexed node of a linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; head && head->prev; head = head->prev)
	;
	for (; head && i < index; head = head->next, ++i)
	;

	return (head);
}
