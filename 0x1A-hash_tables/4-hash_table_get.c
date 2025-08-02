#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with key
 *
 * @ht: hash table to retrieve key from
 * @key: key to be retrieved
 *
 * Return: key if present or NULL if not
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	for (node = ht->array[index]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
	}
	return (NULL);
}
