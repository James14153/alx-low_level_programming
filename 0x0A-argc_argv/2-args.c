#include <stdio.h>
/**
 * main - prints all arguments it receives
 *        All arguments should be printed, including the first on
 *
 * @argc - argument count 
 * @argv -  argument vector
 *
 * Returns 0;
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
