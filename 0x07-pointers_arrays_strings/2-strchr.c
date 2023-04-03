#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: char
 * Return: ptr
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (&s[i]);
}
