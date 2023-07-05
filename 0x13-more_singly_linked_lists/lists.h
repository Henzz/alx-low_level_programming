#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* prints all the elements of a linked list */
size_t print_listint(const listint_t *h);
/* returns the number os elements in a singly linked lists */
size_t listint_len(const listint_t *h);
/* adds a node at the beginning of a linked list */
listint_t *add_nodeint(listint_t **head, const int n);

#endif /* LISTS_H */