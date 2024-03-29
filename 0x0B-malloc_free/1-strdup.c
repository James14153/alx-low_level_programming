#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the string given as a parameter.
*@str: the String to be copied
*
*Return:  NULL in case of error, pointer to allocated space
*/

char *_strdup(char *str)
{
	char *x;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	x = malloc(sizeof(char) * (len + 1));

	if (x == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		x[i] = str[i];
	}

	x[len] = '\0';

	return (x);

}
