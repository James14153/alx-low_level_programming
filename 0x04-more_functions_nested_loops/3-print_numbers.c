#include "main.h"

/**
 * print_numbers - a function that printsthe numbers, from 0 to 9
 *
 * Return: 0-9 followed by newline
 */
void print_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
		_putchar(j + '0');
	_putchar('\n');
}
