#include "lists.h"
/**
 * print_listint - this function print int in every position
 * @h: This is the structure entry
 * Return:  return to the number the nodes
 *
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i += 1;
		h = h->next;
	}
	return (i);
}
