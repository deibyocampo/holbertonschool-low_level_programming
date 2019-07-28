#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers -  prints numbers, followed by a new line.
 *
 * @separator: is the string to be printed between numbers.
 *
 * @n: is the string to be printed between numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argum;
	unsigned int a;

	va_start(argum, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(argum, unsigned int));
		if (separator != NULL && a < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(argum);
}
