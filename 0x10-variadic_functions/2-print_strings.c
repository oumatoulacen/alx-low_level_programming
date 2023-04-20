#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - prints strings, followed by a new lin
 * @separator: between chunks
 * @n: number of chunks
 * @...: elipses
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *s;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s == NULL)
			s = "(nil)";
		printf("%s", s);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
