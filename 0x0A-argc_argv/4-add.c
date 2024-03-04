#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc - number of arguments passed to the function
 * @argv - argument vector of pointers to strings
 *
 * Returns 0 if success, else 1
 */
int main(int argc, char *argv[])
{
	int x = 0, y, z;

	for (y = 1; y < argc; y++)
	{
		for (z = 0; argv[y][z]; z++)
		{
			if (isdigit(argv[y][z]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (y = 1; y < argc; y++)
	{
		x += atoi(argv[y]);
	}
	printf("%d\n", x);
	return (0);
}
