#include "lists.h"
/**
 * add_dnodeint_end - add a node to the end of the list
 * @head: address of first node pointer
 * @n: int value for new node
 * Return: NULL if fail, or ptr to first item of list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *start = *head;

	if (!new || !head)
	{
		free(new);
		return (NULL);
	}

	for (; head && *head && (*head)->next; *head = (*head)->next)
	;

	new->n = n;
	new->next = NULL;

	if (*head)
	{
		(*head)->next = new;
		new->prev = *head;
	}
	else
	{
		new->prev = NULL;
		return (*head = new);
	}

	*head = start;
	return (new);
}
