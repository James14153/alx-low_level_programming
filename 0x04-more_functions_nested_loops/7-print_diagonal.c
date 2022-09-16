#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int  xo, mn;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (xo = 1; xo <= n; xo++)
		{
			for (mn = 1; mn < xo; mn++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
