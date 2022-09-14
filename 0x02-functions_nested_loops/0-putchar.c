#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 **/
int main(void)
{
	char *pmo = "_putchar";

	while (*pmo)
	{
		putchar(*pmo);
		pmo++;
	}
	putchar('\n');

	return (0);
}
