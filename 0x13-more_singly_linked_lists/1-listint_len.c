#include "lists.h"
/**
 * listint_len - counts the number of elements of a linked
 * list.
 * @h: head of a linked list
 *
 * Return: if success number of elements in a linked list,
 * if failure 0.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	/* if passed argument h is null */
	if (h == NULL)
		return (0);

	nodes = 0;
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
