#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: ptr
 * @b: constant
 * @n: num
 * Return: pter
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;
	unsigned int i;

	ptr = s;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (ptr);
}
