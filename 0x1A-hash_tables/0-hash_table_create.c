#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to new hash table or NULL on error.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;

	hashtable = malloc(sizeof(hash_table_t));
	if (!hashtable || !size)
		return (NULL);

	hashtable->size = size;
	hashtable->array = malloc(sizeof(hash_node_t *) * size);

	return (hashtable);
}
