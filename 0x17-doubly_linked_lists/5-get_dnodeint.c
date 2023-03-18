#include "lists.h"

/**
 * get_dnodeint_at_index - locates a node of a linked list
 * @head: head of a linked list
 * @index: index of the node
 * Return: nth node of a linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
