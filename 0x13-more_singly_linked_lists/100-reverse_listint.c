#include "lists.h"
/**
 * reverse_listint - reverses a linked list.
 * @head: pointer to the head of a head of a linked list.
 *
 * Return: if success the first node of the reversed linked list,
 * if failure -1.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *prev = NULL;

	while ((*head) != NULL)
	{
		(*head) = (*head)->next;
		current->next = prev;
		prev = current;
		current = (*head);
	}
	*head = prev;
	return (*head);
}
