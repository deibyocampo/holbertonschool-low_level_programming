#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: the string to be printed between the strings.
 *
 * @n: the number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	char *m;
	va_list argum;

	va_start(argum, n);
	if (separator == NULL)
	{
		for (a = 0; a < n; a++)
		{
			m = va_arg(argum, char *);
			if (m == NULL)
				printf("(nil)");
			printf("%s", m);
		}
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			m = va_arg(argum, char *);
			if (m == NULL)
				printf("(nil)");
			else if (a < n - 1)
				printf("%s%s", m, separator);
			else
				printf("%s", m);
		}
	va_end(argum);
	}
	printf("\n");
}
