#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: hash table to be printed
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *nodes;
	int counter = 0;
	unsigned long int i;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		nodes = ht->array[i];

		while (nodes)
		{
			if (counter)
				printf(", ");
			printf("'%s': '%s'", nodes->key, nodes->value);
			nodes = nodes->next;
			counter++;
		}
	}
	printf("}\n");
}
