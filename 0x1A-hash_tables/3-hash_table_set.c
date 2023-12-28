#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * free_item - frees a hash node in a hash table.
 * @item: the hash node.
 */
void free_item(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item->next);
	free(item);
}

/**
 * update_node - updates the value of a node from a hash table
 * with given key associated value.
 * @item: the node.
 * @key: the key to update.
 * @value: the new value.
 * Return: 1 on success update, otherwise 0.
 */
int update_node(hash_node_t *item, const char *key, const char *value)
{
	hash_node_t *node;

	node = item;
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	return (0);
}

/**
 * hash_table_set - adds an element to a hash table.
 * @ht: the hash table you want ot add or update the key/value to.
 * @key: the key.
 * @value: the value associated with the key. Must be duplicated.
 * Can be an empty string.
 * Return: 1 on success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	int j;
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
		free_item(new_node);
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
		j = update_node(ht->array[index], key, value);
		if (j == 1)
		{
			free_item(new_node);
			return (1);
		}

		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}
