#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a linked list.
 * @head: the pointer to the head of a linked list.
 * @index: index of a linked list.
 *
 * Return: the nth node of a linked list(listint_t).
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
