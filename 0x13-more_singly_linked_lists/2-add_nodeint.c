#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a linked list
 * @head: head pointer to a linked list
 * @n: integer of the new head
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead;

	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL)
		return (NULL);

	newhead->n = n;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
