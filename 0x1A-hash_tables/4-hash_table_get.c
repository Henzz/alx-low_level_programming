#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - searches for a key in a hash table.
 * @ht: the hash table.
 * @key: the key to search in the hash table.
 *
 * Return: the value associated with the key,
 * or NULL if key could not be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *item;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	if (ht->array == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	item = (hash_node_t *)ht->array[index];

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}

	return (NULL);
}
