#include "hash_tables.h"

/**
 * key_index - gives the index of a key in a hash table
 * @key: the key to look up.
 * @size: size of the hash table.
 *
 * Return: the index at which the key/value pair should
 * be stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash_val;

	hash_val = hash_djb2(key);
	index = hash_val % size;

	return (index);
}
