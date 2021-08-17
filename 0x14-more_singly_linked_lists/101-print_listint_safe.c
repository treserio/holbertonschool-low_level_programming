#include "lists.h"
/**
 * print_listint_safe - print a linked list once
 * @head: starting head to print in list
 * Return: number of items in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	listint_t *start;

	if (!head)
		return (i);

	start = head;
	head = head->next;

	for (head = head->next; start != head && head; head = head->next, ++i)
		printf("%d\n", head->n);

	return (i);
}
