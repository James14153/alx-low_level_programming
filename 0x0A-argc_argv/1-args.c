#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char argv[])
{
	int d;
	(void)argv;

	for (d = 0; d <= argc; d++)
	{}
	printf("%d\n", d - 2);

	return (0);
}
