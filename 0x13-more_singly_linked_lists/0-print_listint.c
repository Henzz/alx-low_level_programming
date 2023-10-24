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
	listint_t *head;

	/* if passed argument h is null */
	if (h == NULL)
		return (0);

	head = malloc(sizeof(listint_t));
	if (head == NULL)
	{
		printf("Error\n");
		return (0);
	}
	head->n = h->n;
	head->next = h->next;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		nodes++;
	}

	return (nodes);
}
