#include "main.h"

/**
 * _islower - check if is lower of not.
 *@c: char to check
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 65 && c <= 90)
		return (0);
	else
		return (1);
}
