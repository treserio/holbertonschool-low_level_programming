#include "lists.h"
#include "3-add_nodeint_end.c"
#include "0-print_listint.c"
#include "5-free_listint2.c"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - free all elements of a list
 * @head: starting node in list
 * @index: value to remove
 * Return: 1 if succeed 2 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;

	for (i = 0; head && *head && i <= index; ++i, *head = (*head)->next)
	{
		if (i == 0)
		{
			tmp = *head;
			head = &(*head)->next;
			free(tmp);
		}
		else if (i == index - 1)
			tmp = (*head);
	}
	tmp->next = (*head)->next;
	free(head);

	return ((*head)->n);
}
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    int n;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);
    n = pop_listint(&head);
    printf("- %d\n", n);
    print_listint(head);
    n = pop_listint(&head);
    printf("- %d\n", n);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}