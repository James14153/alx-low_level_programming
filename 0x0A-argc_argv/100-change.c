#include <stdio.h>
#include <stdlib.h>

/**
 * main - pogram that prints minimum number of,
 * coins to make change for an amount of money.
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 if success, else 1
 */
int main(int argc, char *argv[])
{
	int b, m = 0, j, y;
	int d[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	b = atoi(argv[1]);
	if (b <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (j = 0; j < 5; j++)
		{
			y = b / d[j];
			b -= y * d[j];
			m += y;
			if (b == 0)
				break;
		}
	}
	printf("%d\n", m);
	return (0);
}
