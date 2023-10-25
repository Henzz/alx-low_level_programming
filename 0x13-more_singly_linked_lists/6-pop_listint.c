#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list_t list
 * @head: a pointer to the head list_t list.
 *
 * Return: the head node's data(n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (*head == NULL)
		return (0);
	tmp = *head;
	num = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (num);
}
