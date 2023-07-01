#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: lists of nodes
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		i++;
	}
	return (i);
}
