#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - counts the number of elements in a linked list
 * @h: head pointer to a linked list
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
