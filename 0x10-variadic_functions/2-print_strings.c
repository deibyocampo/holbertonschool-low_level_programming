#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: the string to be printed between the strings.
 *
 * @n: the number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argum;
	unsigned int a;
	char *mm;

	va_start(argum, n);

	for (a = 0; a < n; a++)
	{
		mm = va_arg(argum, char *);
		printf("%s", mm);
		if (mm == NULL)
			printf("nill");
		if (a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argum);
}
