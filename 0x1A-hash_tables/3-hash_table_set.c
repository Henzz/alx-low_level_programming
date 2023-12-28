#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * free_node - frees a hash node in a hash table.
 * @item: the hash node.
 */
void free_node(hash_node_t *item)
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
 * create_node - creates a new node.
 * @key: the new key.
 * @value: the new value.
 * Return: on success the created new node, otherwise NULL.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
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
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	/* Check if key already exists and update the value */
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}

	/* Key doesn't exist, create a new node */
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	/* Insert the new node at the beginning of the list */
	index = key_index((const unsigned char *)key, ht->size);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
