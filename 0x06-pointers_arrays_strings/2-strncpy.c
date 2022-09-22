#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: copy to
 * @src: copy from
 * @n: input number of char
 * Return: Always 0 (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < n)
			dest[j] = src[j];
		while (j < n)
			dest[j++] = '\0';
	}

	return (dest);
}
