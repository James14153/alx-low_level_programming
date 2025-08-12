#include "hash_tables.h"

/* a sorted hash table  */

/**
 * shash_table_create - creates a sorted hash table
 *
 * @size: size of the array
 *
 * Return: pointer to newly allocated memory or
 * Null if something failed
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hash_table;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(shash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->array = calloc(size, sizeof(shash_node_t *));
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}
	hash_table->shead = NULL;
	hash_table->stail = NULL;
	hash_table->size = size;

	return (hash_table);
}

/**
 *
 * shash_table_set - inserts a key, value pair in sorted linked list
 *
 * @ht: our hash table
 * @key: the key to insert
 * @value: value associated with key
 *
 * Return: Nothing
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *tmp, *new_node;
	unsigned long int index;

	if (!ht || !key || !value || *key == '\0')
		return (0);

	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;

	}
	else if (strcmp(key, ht->shead->key) < 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else  if (strcmp(key, ht->stail->key) > 0)
	{
		new_node->sprev = ht->stail;
		new_node->snext = NULL;
		ht->stail->snext = new_node;
		ht->stail = new_node;
	}
	else
	{
		tmp = ht->shead;
		while (tmp && strcmp(key, tmp->key) > 0)
		{
			tmp = tmp->snext;
		}

		new_node->snext = tmp;
		new_node->sprev = tmp->sprev;
		tmp->sprev->snext = new_node;
		tmp->sprev = new_node;
	}
	return (1);
}

/**
 * shash_table_get - gets a value from a hash table
 *
 * @ht: table to look up  value from
 * @key: the key containing the value
 *
 * Return: the value or Null if absent
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (!ht || !key || *key == '\0')
		return NULL;

	index = key_index((unsigned char *)key, ht->size);

	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return node->value;
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - print hash table using sorted linked list
 *
 * @ht: hash table to print
 *
 * Return: Nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (!ht || !ht->shead)
	{
		printf("{}");
		return;
	}
	current = ht->shead;
	printf("{");

	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		if (current)
		{
			printf(", ");
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints hash table key value pairs
 * in reverse order
 *
 * @ht: hash table t print
 *
 * Return: Nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht || !ht->stail)
	{
		printf("{}");
		return;
	}

	node = ht->stail;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node)
		{
			printf(", ");
		}

	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 *
 * @ht: hash table to delete
 *
 * Return: nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int index, i;
	shash_node_t *node, *tmp;

	if (!ht)
		return;
	index = ht->size;
	node = ht->array[index];

	for (i = 0; i < index; i++)
	{
		while (node)
		{
			tmp = node;
			node = node->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}


