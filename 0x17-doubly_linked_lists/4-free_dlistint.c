#include "lists.h"

/**
 * free_dlistint - frees a node list
 * @head: a node list head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
