#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: always 0 (success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int xo;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}

	for (xo = 0; xo < n; xo++)
	{
		dest[j + xo] = src[xo];
		if (src[xo] == '\0')
			xo = n;
	}

	return (dest);
}
