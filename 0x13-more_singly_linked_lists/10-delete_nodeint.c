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
	listint_t *current = *head, *prev = NULL;
	unsigned int i = 1;

	if (index == 0 && (*head) != NULL)
	{
		(*head) = (*head)->next;
		free(current);
		return (1);
	}
	else
		return (-1);

	while (current != NULL && i != index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}
