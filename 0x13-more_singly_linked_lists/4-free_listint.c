#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list_t list
 * @head: a pointer to the list_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
