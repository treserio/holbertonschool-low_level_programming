#include "lists.h"
/**
 * delete_nodeint_at_index - free all elements of a list
 * @head: starting node in list
 * Return: void
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	linstint_t *tmp;

	for (i = 0; head && *head && i <= index; ++i, (*head)->next)
	{
		if (i == 0)
		{
			tmp = *head;
			head = (*head)->next;
			free(tmp);
		}
		else if (i == index - 1)
			tmp = (*head);
	}
	tmp->next = (*head)->next;
	free(head);
}