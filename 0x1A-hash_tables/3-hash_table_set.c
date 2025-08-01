#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 *
 * @ht: hash table
 * @key: key we use to compute index
 * @value: value held by key
 *
 * Return: 0 if success 1 if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t  *node;
	hash_node_t *new_node;
	unsigned long int index;
	char *value_copy;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	value_copy = value ? strdup(value) : strdup("");
	if (value_copy == NULL)
		return (0);

	for (node = ht->array[index]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = value_copy;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_copy);
		return (0);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		free(value_copy);
		return (0);
	}

	new_node->value = value_copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

