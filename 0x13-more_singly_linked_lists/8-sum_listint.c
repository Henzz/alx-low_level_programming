#include "lists.h"

/**
 * sum_listint - adds all the data (n) of a linked list
 * @head: lists of nodes
 *
 * Return: the sum of all data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
