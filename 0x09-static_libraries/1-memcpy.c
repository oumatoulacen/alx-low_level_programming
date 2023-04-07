#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: dst
 * @src: src
 * @n: num
 * Return: ptr
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}
	return (ptr);
}
