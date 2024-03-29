#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array, using malloc.
 * @nmemb: number of elements in the array
 * @size: size in bytes of the elements
 *
 * Return: a void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (j = 0; j < (nmemb * size); j++)
		p[j] = 0;
	return (p);
}
