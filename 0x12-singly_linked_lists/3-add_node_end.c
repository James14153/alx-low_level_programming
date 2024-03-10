#include "lists.h"
#include <string.h>

/**
 * add_node_end - this adds a node at the end, my dude
 * @head: points to the head
 * @str: the string to put into it
 * Return: pointer to new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *last;
	unsigned int j;

	if (!(head && str))
		return (NULL);

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	for (j = 0; str[j]; j++)
	{}
	newNode->len = j;
	newNode->next = NULL;

	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}

	last = *head;
	while (last->next)
	{
		last = last->next;
	}
	last->next = newNode;
	return (newNode);
}
