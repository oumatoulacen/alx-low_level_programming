#include "main.h"

/**
 * _isdigit - checks for a digit
 *@c: num
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	return (0);
}
