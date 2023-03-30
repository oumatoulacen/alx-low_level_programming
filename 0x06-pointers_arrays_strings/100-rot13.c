#include "main.h"

/**
 * rot13 - encodes a string into rot13.
 * @str: string
 * Return: ptr
 */

char *rot13(char *str)
{
	char *p = str;

	while (*p)
	{
		if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
		{
			*p += 13;
		}
		else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
			*p -= 13;
		p++;
	}
	return (str);
}

