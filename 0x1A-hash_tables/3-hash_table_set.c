#include "hash_tables.h"

/**
 * hash_table_set -adds an element to the hash table.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 *
 * Return: 1 on success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *newnode = NULL;

	idx = key_index((const unsigned char *) key, ht->size);

	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);

	newnode->key = strdup(key);
	newnode->value = strdup(value);

	if (!ht->array[idx])
	{
		ht->array[idx] = newnode;
		newnode->next = NULL;
	}
	else
	{
		newnode->next = ht->array[idx];
		ht->array[idx] = newnode;
	}

	return (1);
}
