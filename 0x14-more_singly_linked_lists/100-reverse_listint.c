#include "lists.h"
/**
 * reverse_listint - reverse a singly linked list
 * @head: starting node in list
 * Return: a pointer to the fisrt node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = *head;
	next = (*head)->next;
	prev->next = NULL;

	while (*head)
	{
		*head = next;
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
	}
	*head = prev;
	return (*head);
}