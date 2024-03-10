#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - this adds a node at the beginning of list
 * @head: points to the head of list
 * @str: what goes in the new node
 * Return: address of new node or NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	int j;
	list_t *new;

	if (!(head && str))
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	for (j = 0; str[j]; j++)
	{}
	new->str = strdup(str);
	if (!(new->str))
	{
		free(new);
		return (NULL);
	}
	new->len = j;
	new->next = *head;
	*head = new;

	return (new);
}
