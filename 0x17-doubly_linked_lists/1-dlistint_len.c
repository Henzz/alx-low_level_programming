#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: list of nodes
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
