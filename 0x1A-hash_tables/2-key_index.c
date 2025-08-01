#include "hash_tables.h"

/**
 * key_index - uses djb2 fuction to compute index
 *
 * @key: key to be used in computing hash value
 * @size: size of the array of hash table
 *
 * Return: index calculated from hash value
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	if (size == 0)
		return (0);

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}
