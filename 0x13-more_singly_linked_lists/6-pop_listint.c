#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list.
 * @head: the pointer to the head of a linked list.
 *
 * Return: if success the head node's data(n),
 * if failure 0.
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
