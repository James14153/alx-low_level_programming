#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, form 0 to 9
 *
 * Return: 0-9, excluding 2 and 4, followed by a new line
 */
void print_most_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		if ((j == 2) || (j == 4))
			continue;
		else
			_putchar(j + '0');
	}
	_putchar('\n');
}
