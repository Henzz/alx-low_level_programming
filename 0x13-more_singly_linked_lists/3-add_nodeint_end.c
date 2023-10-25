#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a linked list.
 * @head: pointer of a linked list head.
 * @n: new data value of the new node.
 *
 * Return: if success the new node, if failure NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;

	/* new node */
	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/* if head is null */
	if (*head == NULL)
		*head = new_node;
	else
	{
		/* getting last node of the linked list */
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	return (new_node);
}
