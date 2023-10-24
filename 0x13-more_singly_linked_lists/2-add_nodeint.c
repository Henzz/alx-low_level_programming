#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a linked list.
 * @head: pointer to the head of a linked list.
 * @n: data value of the new node.
 *
 * Return: if success the address of the new element,
 * if fail NULL.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* allocate memory for struct pointer */
	new_node = malloc(sizeof(new_node));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
