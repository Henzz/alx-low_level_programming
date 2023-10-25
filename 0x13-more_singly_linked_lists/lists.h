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

#include "stddef.h"
#include "stdio.h"
#include "stdlib.h"
/* prints all lists in a linked list */
size_t print_listint(const listint_t *h);
/* returns the number of elements in a linked list */
size_t listint_len(const listint_t *h);
/* adds a new node at the beginning of a linked list */
listint_t *add_nodeint(listint_t **head, const int n);
/* adds a new node at the end of a linked list */
listint_t *add_nodeint_end(listint_t **head, const int n);
/* frees a linked list */
void free_listint(listint_t *head);
/* frees a linked list with double pointer */
void free_listint2(listint_t **head);
/* removes the head of a linked list */
int pop_listint(listint_t **head);
/* gets the node at an index of a linked list */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/* sums the data(n) of all linked list and returns it */
int sum_listint(listint_t *head);
/* inserts a new node at a given position in a linked list */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/* deletes the node at given index of a linked list */
int delete_nodeint_at_index(listint_t **head, unsigned int index);
/* reverses a linked list */
listint_t *reverse_listint(listint_t **head);

#endif /* LISTS_H */
