#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table.
 * @ht: the hash table you want ot add or update the key/value to.
 * @key: the key.
 * @value: the value associated with the key. Must be duplicated.
 * Can be an empty string.
 *
 * Return: 1 on success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	size_t index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (new_node->key == NULL || (new_node->value == NULL && value != NULL))
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	if (ht->array[index] == NULL)
	{
		/* No collision, insert the new node at the beginning of the list */
		ht->array[index] = new_node;
	}
	else
	{
		/* collision occurred, add the new node at the beginning of the list */
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
