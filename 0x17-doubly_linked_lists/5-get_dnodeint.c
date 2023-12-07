#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at nth index of a dlistint_t list
 * @head: head of a linked list
 * @index: index position to look for
 * Return: the index of a dlistint_t list,
 * else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (NULL);

	while (temp != NULL && i != index)
	{
		i++;
		temp = temp->next;
	}
	if (i == index)
		return (temp);
	return (NULL);
}
