#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at the idx index of a dbllinked list
 * @h: pointer to node in dbl linked list
 * @idx: index to insert new node
 * @n: value to add to new node
 * Return: the indexed node of a linked list
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *start;

	if (idx == 0)
		return (add_dnodeint(h, n));
	/* check that our list exists */
	if (!h)
		return (NULL);
	start = *h;
	/* find the idxed node */
	for (; h && i < idx; *h = (*h)->next, ++i)
	;
	/* if we're not at the node before index rtrn NULL */
	if (i != idx)
		return (NULL);
	/* if i = idx - 1 && *h == NULL we're at the end */
	if (!(*h))
		return (add_dnodeint_end(h, n));
	/* else malloc new and insert in between nodes */
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	*h = (*h)->prev;
	new->n = n;
	new->next = (*h)->next;
	new->prev = (*h);
	new->next->prev = new;
	(*h)->next = new;
	*h = start;
	return (new);
}
