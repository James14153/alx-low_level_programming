#include <stdio.h>
/**
 * display numbers of starting from 0
 *
 * return 0.
 * */
int main(void)
{
	int number;
	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');
	putchar("\n");
	return (0);
}
