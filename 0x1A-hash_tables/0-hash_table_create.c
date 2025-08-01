#include "main.h"
#include <stdlib.h>

/*
 * hash_table_create - creates a hash table
 * @size: no of buckets in a hash table
 * 
 * Return: a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned int size)
{
	if (size == NULL)
		return NULL;

	hashtable = malloc(sizeof(hash_table_t))
	if (ht == NULL)
		return NULL;

	hashtable->size = size;
	hashtable->array = calloc(size, sizeof(hash_node_t *));
	if ( hashtable->array == NULL)
	{
		free(hashtable);
		return NULL;
	}

	return hashtable;
}
