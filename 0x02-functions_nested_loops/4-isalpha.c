#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *@c: ceck char
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c <= 122 && c >= 97 || c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
