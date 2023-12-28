#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table key and associated value.
 * @ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	int i;

	printf("{");
	for (i = 0; i < (int)ht->size; i++)
	{
		if (ht->array[i])
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);

		if (ht->array[i + 1])
			printf(", ");
	}
	printf("}\n");
}
