#include "main.h"

/**
 * print_square - a function that prints a square, follow by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int xo, po;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (xo = 1; xo <= size; xo++)
		{
			_putchar('#');
			for (po = 2; po <= size; po++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
