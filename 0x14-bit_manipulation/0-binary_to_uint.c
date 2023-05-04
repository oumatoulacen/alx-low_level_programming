#include <stdio.h>
#include "main.h"

int _isdigit(int c);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return:  the converted number, or 0 if:
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int dec = 1, i = 0, len;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (!_isdigit(b[i]))
			return (0);
		i++;
	}

	for (len = i - 1; len >= 0; len--)
	{
		if (b[len] == '1')
			num += dec;
		dec *= 2;
	}
	return (num);
}


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
