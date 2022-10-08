#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagnols of a
 * square matrix of inetegers
 *
 * @a: the name of the array
 * @size: the size of the array
 */

void print_diagsums(int *a, int size)
{
	int m = 0;
	int n = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (m <= (size * size))
	{
		sum1 = sum1 + a[m];
		m = m + size + 1;
	}

	while (n < (size * size - 1))
	{
		sum2 += a[n];
		n = n + size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}

