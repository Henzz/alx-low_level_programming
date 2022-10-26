#include "lists.h"

/**
 * listint_len - counts the number of elements of a linked list
 * @h: pointer to head of a linked list
 *
 * Return: the number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
