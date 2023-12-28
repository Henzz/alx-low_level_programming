#include <stdlib.h>
#include "hash_tables.h"

/**
 * free_item - frees a hash node in a hash table.
 * @item: the hash node.
 */
void free_item(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	/* free(item->next); */
	free(item);
}

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free_item(temp);
		}
	}

	free(ht->array);
	free(ht);
}
