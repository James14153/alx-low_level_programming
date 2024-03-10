#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function reallocates a memory block using malloc and free.
 * @ptr: the pointer to previously allocated memory
 * @old_size: size of allocated space for ptr
 * @new_size: size of newly allocated space
 *
 * Return: a pointer to newly allocated memory, or NULL if failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	unsigned int j, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		x = malloc(new_size);
		return (x);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	x = malloc(new_size);
	if (x == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (j = 0; j < max; j++)
		x[j] = oldp[j];
	free(ptr);
	return (x);
}
