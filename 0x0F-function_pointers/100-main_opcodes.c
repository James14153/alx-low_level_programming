#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own function.
 * @argc: The number of command-line arguments.
 * @argv: The array of command-line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
    int num_bytes, i;
    unsigned char *main_ptr;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    num_bytes = atoi(argv[1]);

    if (num_bytes < 0)
    {
        printf("Error\n");
        return (2);
    }

    main_ptr = (unsigned char *)main;

    for (i = 0; i < num_bytes; i++)
    {
        printf("%02x", main_ptr[i]);
        if (i < num_bytes - 1)
            printf(" ");
    }

    printf("\n");
    return (0);
}
