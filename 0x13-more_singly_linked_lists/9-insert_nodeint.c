#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position n in a linked list.
 * @head: pointer to the head of a linked list.
 * @idx: position of where to insert the new node.
 * @n: value data to be inserted.
 *
 * Return: if success the address of the new node, if failure NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy;
	unsigned int i = 1;

	copy = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}
	while (i < (idx - 1))
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);
		copy = copy->next;
		i++;
	}
	new->next = copy->next;
	copy->next = new;
	return (new);
}
