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
	unsigned int b;

	va_start(argum, n);

	for (b = 0; b < n; b++)
	{
		a = va_arg(argum, unsigned int);
		printf("%d", a);
		if (b < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(argum);
}
