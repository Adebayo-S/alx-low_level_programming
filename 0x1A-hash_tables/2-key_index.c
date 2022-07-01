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
	unsigned long int i = 0, idx = 0, hash = hash_djb2(key);
	char str_hash[50];
	char cncat[3];

	sprintf(str_hash, "%ld", hash);

	while (str_hash[i] && idx < size)
	{
		if (str_hash[i + 1])
		{
			cncat[0] = str_hash[i], cncat[1] = str_hash[i + 1], cncat[3] = '\0';
			idx += atoi(cncat), i++;
		}
		else
			idx += (int)(str_hash[i]);
		i++;
	}

	return (idx);
}
