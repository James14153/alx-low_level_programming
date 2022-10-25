#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: points to the beginnin of list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *phree;

	while (head)
	{
		phree = head;
		head = head->next;
		free(phree->str);
		free(phree);
	}
}
