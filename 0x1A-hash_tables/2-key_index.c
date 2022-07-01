#include "hash_tables.h"
#include <string.h>

/**
 * key_index -gives the index of the key
 * @key: the key (string)
 * @size: the size of the array
 *
 * Return: the index at which the key/value pair should
 *        be stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
