#include<stdlib.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: a string with characters
 * @c: a character in a string
 *
 * Return: a pointer to the first occurrence of character c in the string
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}

