#include "lists.h"
/**
 * print_listint - prints all elements of a single linked list.
 * @h: pointer to the head of linked list.
 *
 * Return: the number of nodes of the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	/* if passed argument h is null */
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
