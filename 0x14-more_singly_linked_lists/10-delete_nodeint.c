#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at the index.
 * @head: the list.
 * @index: where the node needs to be deleted.
 * Return: 1 if succeeded, 0 if not.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *delete = (listint_t *)*head;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(delete);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (i + 1 == index)
		{
			node = delete;
		}
		delete = delete->next;
		if (delete == NULL)
		{
			return (-1);
		}
	}
	node->next = delete->next;
	free(delete);
	return (1);
}
