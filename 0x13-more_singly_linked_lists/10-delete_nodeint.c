#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given index of a linked list.
 * @head: pointer to the head of a linked list.
 * @index: index position to remove the node.
 *
 * Return: if success 1, if failure -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *copy, *prev;
	unsigned int i = 1;

	if (index == 0 && (*head) != NULL)
	{
		copy = (*head)->next;
		free(*head);
		*head = copy;
		return (1);
	}
	else
		return (-1);

	copy = *head;
	while (i != index)
	{
		if (copy == NULL || copy->next == NULL)
			return (-1);
		prev = copy;
		copy = (*head)->next;
		i++;
	}
	prev->next = copy->next;
	free(copy);
	return (1);
}
