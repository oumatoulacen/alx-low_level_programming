#include "main.h"

/**
 * _isupper - checks for uppercase character
 *@c: char
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);

	return (0);
}
