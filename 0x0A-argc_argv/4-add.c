#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 if error such as symbols that are not numbers,
 * 0 if nothing is passed
 */

int main(int argc, char *argv[])
{
	int d, e;
	int f = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (d = 1; d < argc; d++)
	{
		for (e = 1; argv[d][e] != '\0'; e++)
		{
			if (argv[d][e] < '0' || argv[d][e] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		f += atoi(argv[d]);
	}
	printf("%d\n", f);
	return (0);
}
