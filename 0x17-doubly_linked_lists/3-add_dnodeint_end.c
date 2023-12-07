#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: the head of a linked list
 * @n: new n to add
 * Return: the address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (temp == NULL)
	{
		(*head) = new;
		return (*head);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;
	return (*head);
}

