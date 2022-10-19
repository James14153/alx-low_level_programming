#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int d, e, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	d = atoi(argv[1]);
	e = atoi(argv[2]);
	diff = d * e;

	printf("%i\n", diff);

	return (0);
}

