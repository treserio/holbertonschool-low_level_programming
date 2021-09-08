#include "lists.h"
/**
 * add_dnodeint - add a node to the front of the list
 * @head: address of first node pointer
 * @n: int value for new node
 * Return: NULL if fail, or ptr to first item of list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !head)
	{
		free(new);
		return (NULL);
	}

	for (; head && *head && (*head)->prev; *head = (*head)->prev)
	;

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (*head);
}
