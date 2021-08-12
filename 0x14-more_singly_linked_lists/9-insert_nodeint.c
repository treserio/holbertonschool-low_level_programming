#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at the nth node of the list
 * @head: starting node in list
 * @idx: the value of the node to return
 * @n: the value to add to the new node
 * Return: NULL if fail, or addr of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new = malloc(sizeof(listint_t));
	
	if (!new || !head)
		return (NULL);

	/* find indexed node */
	for (i = 0; head && *head && i < idx; ++i)
		*head = (*head)->next;

	new->n = n;
	new->next = (*head)->next;
	(*head)->next = new;

	return (new);
}
