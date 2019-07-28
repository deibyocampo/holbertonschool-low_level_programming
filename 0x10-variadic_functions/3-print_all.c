#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - sum of the argument.
 *
 * @format: argument.
 * Return: void.
 */
void print_all(const char * const format, ...)
{
	va_list argum;
	int a = 0;
	char *p;

	va_start(argum, format);
	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case('c'):
				printf("%c", va_arg(argum, int));
				break;
			case('i'):
				printf("%i", va_arg(argum, int));
				break;
			case('f'):
				printf("%f", va_arg(argum, double));
				break;
			case('s'):
				p = va_arg(argum, char *);
				if (p == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", p);
				break;
			default:
				a++;
				continue;
		}
		if (format[a + 1] != '\0')
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(argum);
}
