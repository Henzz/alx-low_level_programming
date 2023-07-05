#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: head pointer to a linked list
 * @n: integer of the new head
 * Return: the address of the new element or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode-> n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		lastnode = *head;
		while(lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = newnode;
	}
	return (newnode);
}
