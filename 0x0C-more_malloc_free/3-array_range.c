#include "main.h"
#include <stdlib.h>

/**
 * array_range - function creates an array of integers.
 * @min: the first integer number
 * @max: the last integer number
 *
 * Return: a  pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int j, l;
	int *b;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	b = malloc(sizeof(int) * l);
	if (b == NULL)
		return (NULL);
	for (j = 0; j < l; j++, min++)
	{
		b[j] = min;
	}
	return (b);
}
