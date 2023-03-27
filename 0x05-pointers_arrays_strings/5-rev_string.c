#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int lng;
	int j = 0;
	int k = 0;
	char str[10] = {0};

	lng = 0;
	while (s[i])
	{
		lng++;
		i++;
	}

	while (s[lng - 1])
	{
		str[j] = s[lng - 1];
		lng--;
		j++;

	}
	while (str[k])
	{
		s[k] = str[k];
		k++;
	}

}
