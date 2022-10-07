#include "main.h"

/**
 * _strpbrk - a function thatearches a string for any of a set of bytes
 *
 * @s: atring with our first occurrence
 * @accept: contains bytes to match totring @s
 *
 * Return: a pointer that to the byte in that matches one of the bytes
 * in the accept or NULL if nouch byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
