#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters.
 * @n: The number of items
 * Return:  the sum of all its parameters.
 *         If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list jk;
	unsigned int i;
	int sum;

	sum = 0;
	va_start(jk, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(jk, int);
	}
	va_end(jk);
	return (sum);
}
