#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdbool.h>
/**
 * print_all - Function that prints anything
 *
 * @format: This is the format to print a value
 *
 */
void print_all(const char * const format, ...)
{
	va_list xy;
	char *string;
	int j;

	j = 0;
	va_start(xy, format);
	while (format != NULL && format[j] != '\0')
	{
		switch (format[j])
		{
			case 'i':
				printf("%i", va_arg(xy, int));
				break;
			case 'f':
				printf("%f", va_arg(xy, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(xy, int));
				break;
			case 's':
				string = va_arg(xy, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if ((format[j] == 'c' || format[j] == 'i' || format[j] == 'f' ||
		format[j] == 's') && format[(j + 1)] != '\0')
			printf(", ");
		j++;
	}
	printf("\n");
	va_end(xy);
}
