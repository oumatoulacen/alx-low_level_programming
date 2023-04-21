#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all -  prints anything
 * @format: a list of types of arguments passed to the function
 * @...: elipses
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *s, *sep = "";
	int i;
	float f;
	char c;
	char const *ptr;

	ptr = format, va_start(args, format);
	if (format)
	{
		while (*ptr != '\0')
		{
			switch (*ptr)
			{
				case 's':
					s = va_arg(args, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", sep, s);
					break;
				case 'i':
					i = va_arg(args, int);
					printf("%s%d", sep, i);
					break;
				case 'f':
					f = va_arg(args, double);
					printf("%s%f", sep, f);
					break;
				case 'c':
					c = va_arg(args, int);
					printf("%s%c", sep, c);
					break;
			} ptr++;
			sep = ", ";
		}
		printf("\n"), va_end(args);
	}
}
