#include "main.h"

/**
 * my_sqrt_recursion - the recursion function about the squareroot.
 *
 * @x: equal to n
 * @y: this the sum
 * Return: my_sqrt_recursion(x, y + 1));
 */

int my_sqrt_recursion(int x, int y)
{
	if (x == (y * y))
		return (y);
	else if ((y * y) >= x)
		return (-1);
	else
		return (my_sqrt_recursion(x, y + 1));
}

/**
 * _sqrt_recursion - This is the first function
 * @n: This is the value to find squareroot
 *
 * Return: the  result of the function my_sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (my_sqrt_recursion(n, 0));
}
