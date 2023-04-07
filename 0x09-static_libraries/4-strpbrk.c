#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: when to search
 * @accept: for what to search
 * Return: first occurence of accept ele in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
