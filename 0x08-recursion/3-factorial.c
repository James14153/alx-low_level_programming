#include "main.h"

/**
 * factorial - a function that returns factorial of a given number
 *
 * @n: the number to find factorial of
 *
 * Return: factorial of @n
 * if n is lower than 0, the function should return -1 to
 * indicate an error, if 0 return 1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
