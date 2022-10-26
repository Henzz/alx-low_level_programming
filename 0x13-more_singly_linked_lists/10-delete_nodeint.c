#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at of given index
 * of a listint_t linked list
 * @head: pointer to head of a linked list
 * @index: index of a linked list
 *
 * Return: Always 1(success) or -1(failure).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy;
	unsigned int i = 0;

	copy = *head;
	if (copy == NULL)
		return (-1);
	if (idx == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}
	temp = copy->next;
	copy->next = temp->next;
	free(temp);
	return (1);
}
