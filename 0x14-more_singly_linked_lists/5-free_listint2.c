#include "lists.h"
/**
 * free_listint2 - free all elements of a list
 * @head: starting node in list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *eraser;
	int i;

	/* find how many nodes */
	for (i = 0; head; ++i)
	{
		eraser = head;
		head = head->next;
		if (i = 0)
			eraser = NULL;
		else
			free(eraser);
	}
}
