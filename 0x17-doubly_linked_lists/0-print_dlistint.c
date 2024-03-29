#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: head of a linked list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	if (h == NULL)
		return (0);

	while (temp != NULL)
	{
		i++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (i);
}
