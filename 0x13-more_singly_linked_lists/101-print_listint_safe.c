#include "lists.h"
/**
 * print_listint_safe - prints a linked list.
 * @head: head of a linked list.
 *
 * Return: if success the number of nodes in the list,
 * if failure exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = head;
	size_t i = 0;


	while (tmp != NULL)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		i++;
		tmp = tmp->next;
	}

	if (tmp == NULL)
		exit(98);

	return (i);
}
