#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: var
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int k = 0;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				k++;
		}
	}
	return (k);
}

