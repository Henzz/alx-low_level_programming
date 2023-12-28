#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table key and associated value.
 * @ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	int i, first = 1;

	printf("{");
	for (i = 0; i < (int)ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			first = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
