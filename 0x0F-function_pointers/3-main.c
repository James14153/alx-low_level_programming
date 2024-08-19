#include "3-calc.h"

/**
 * main - Entry point for the calculator program.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 *
 * Return: 0 on success, or exit with error code.
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	operation = get_op_func(argv[2]);

	if (!operation || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", operation(num1, num2)
	return (0);
}
