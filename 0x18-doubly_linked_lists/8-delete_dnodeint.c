#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at indexed value
 * @h: pointer to node in dbl linked list
 * @idx: index to insert new node
 * Return: 1 on success, else -1
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
	unsigned int i = 0;
	dlistint_t *eraser;

	if (!h || !*h)
		return (-1);

	eraser = *h;
	if (idx == 0)
	{
		*h = eraser->next;
		if (eraser->next)
			(*h)->prev = NULL;
		free(eraser);
		return (1);
	}
	/* find the idxed node */
	for (; eraser && i < (idx - 1); eraser = eraser->next, ++i)
	;
	/* if we're not at the node before index rtrn NULL */
	if (!eraser || !eraser->next)
		return (-1);

	/* check if the one after deleting is there to point back to this node */
	/*temp = eraser;
	eraser = eraser->next;
	temp->next = eraser->next;
	eraser->next->prev = temp;*/
	eraser = eraser->next;
	eraser->prev->next = eraser->next;
	if (eraser->next)
		eraser->next->prev = eraser->prev;
	free(eraser);
	return (1);
}
