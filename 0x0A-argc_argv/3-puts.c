#include "main.h"

/**
 * _puts - prints a string
 * @s: ptr
 * Return: void
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
