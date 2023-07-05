#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head pointer to a linked list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
