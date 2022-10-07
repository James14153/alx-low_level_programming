#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: - final memory area location
 * @src: - previous memory area location
 * @n: - number of bytes copied from memory area
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}

