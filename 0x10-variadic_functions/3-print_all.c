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
	char *s;
	int i;
	float f;
	char c;
	char const *ptr, *prv, *str;

	ptr = prv = str = format, va_start(args, format);
	while(str != NULL)
	{
	while (*ptr != '\0')
	{
		switch (*ptr)
		{
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
		} ptr++;
		if (*ptr != '\0' &&
			(*prv == 'i' || *prv == 'f' || *prv == 's' || *prv == 'c'))
			printf(", ");
		prv++;
	}
	printf("\n"), va_end(args);
	str++;
	}
}
