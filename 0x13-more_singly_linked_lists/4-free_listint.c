#include "lists.h"
/**
 * free_listint - frees a list of linked list.
 * @head: pointer to the head of a linked list.
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
