#ifndef LISTS_H
#define LISTS_H

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* Prints all the elements of a dlistint_t list */
size_t print_dlistint(const dlistint_t *h);
/* Counts and returns number of elements in a linked dlistint_t list */
size_t dlistint_len(const dlistint_t *h);
/* Adds new node at the beginning of a dlistint_t list */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/* Adds new node at the end of a dlistint_t list */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
/* Frees a dlistint_t list */
void free_dlistint(dlistint_t *head);
/* Gets a node at nth index of a dlistint_t list */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
/* Sums all the data (n) of a dlistint_t list */
int sum_dlistint(dlistint_t *head);
/* Inserts a new node at a given position in a dlistint_t list */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
/* Deletes the node at given index of a dlistint_t list */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* LISTS_H */
