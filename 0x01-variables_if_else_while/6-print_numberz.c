#include <stdio.h>
/**
 * main - prints single numbers of starting from 0
 *
 * Return: Always 0.
 **/
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	putchar('\n');

	return (0);
}
