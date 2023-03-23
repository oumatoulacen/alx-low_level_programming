#include "main.h"

/**
 * _isupper - checks for uppercase character
 *@c: char
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_putchar(49);
		return (1);
	}
	else if (c <= 122 && c >= 97)
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_putchar(48);
		return (0);
	}
}
