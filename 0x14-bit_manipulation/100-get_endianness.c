#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int y;
	char *d;

	y = 1;
	d = (char *) &y;

	return ((int)*d);
}
