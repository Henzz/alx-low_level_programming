#include "lists.h"

/**
 * list_len - counts number of elements
 * @h: lists of nodes
 *
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
