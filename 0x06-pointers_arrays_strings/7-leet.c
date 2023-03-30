#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: string
 * Return: ptr
 */

char *leet(char *str)
{
	int i;
	int lng = 0;

	while (str[lng])
		lng++;

	for (i = 0; i < lng; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = 4 + '0';
		if (str[i] == 'e' || str[i] == 'E')
			str[i] = 3 + '0';
		if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		if (str[i] == 't' || str[i] == 'T')
			str[i] = 7 + '0';
		if (str[i] == 'l' || str[i] == 'L')
			str[i] = 1 + '0';
	}
	return (str);
}
