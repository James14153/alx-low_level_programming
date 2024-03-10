#include "function_pointers.h"

/**
 * print_name - function prints a name
 * @name: name to print
 * @f: function to print with
 *
 * Returns: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
