#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked dlistint_t list
 * @h: head of a linked list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (0);

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
