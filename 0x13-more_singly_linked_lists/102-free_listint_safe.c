#include "lists.h"
/**
 * print_listint_safe - frees a linked list.
 * @head: double pointer to the head of a linked list.
 *
 * Return: if success the size of the list that was free'd,
 * if failure NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *tmp;
	size_t i = 0;

	if (current == NULL)
		exit(98);

	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
		i++;
	}
	(*h) = NULL;

	return (i);
}
