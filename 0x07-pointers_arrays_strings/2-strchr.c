#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: char
 * Return: ptr
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (*s);
}
