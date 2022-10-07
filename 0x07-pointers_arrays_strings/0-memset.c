#include "main.h"
#include <stdio.h>

/**
 * _memset() - a function that fills memory with a contant byte
 * @s: - points to memory area
 * @n: - bytes of memory area to fill
 * @b: - constant byte filling memory area
 *
 *Return:  a pointer to the memory area at @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
