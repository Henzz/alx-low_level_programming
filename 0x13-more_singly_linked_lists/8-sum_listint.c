#include "lists.h"

/**
 * sum_listint - sums all the data(n) of a linked list.
 * @head: the head of a linked list.
 *
 * Return: if success the sum of all data(n) of a listint_t linked list,
 * if failure 0.
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
