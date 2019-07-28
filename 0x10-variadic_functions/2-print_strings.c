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
	unsigned int a;
	char *mm;
	va_list argum;

	if (separator != NULL && n != 0)
	{
		va_start(argum, n);
		for (a = 0; a < n; a++)
		{
			mm = va_arg(argum, char *);
			if (mm == NULL)
				printf("(nil)");
			else
				printf("%s", mm);
			if ((a < n - 1) && separator != NULL)
				printf("%s", separator);
		}

		printf("\n");
		va_end(argum);
	}
}
