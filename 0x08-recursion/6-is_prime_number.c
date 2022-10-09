#include "main.h"

/**
 * primefinder - searches for a number if its prime
 *
 * @a: the number to check
 * @b: the numbers well go through
 *
 * Return: whether or not the number is prime
 */

int primefinder(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a < b)
		primefinder(a, b + 1);

	return (1);
}

/**
 * is_prime_number - checks if integer is prime number or not
 *
 * @n: the number to check
 *
 * Return: 0 if the number is not prime  and 1 if it is
 */

int is_prime_number(int n)
{
	return (primefinder(n, 2));
}
