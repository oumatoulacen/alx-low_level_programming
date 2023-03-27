#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	char str;
	int lng;
	int k;

	lng = 0;
	while (s[i])
	{
		lng++;
		i++;
	}
	if (lng % 2 == 0)
	{
	for (k = 0; k <= (lng + 2) / 2; k++)
	{
		str = s[lng - 1];
		s[lng - 1] = s[k];
		s[k] = str;
		lng--;
	}
	}
	else
	{
	for (k = 0; k <= (lng + 3) / 2; k++)
	{
		str = s[lng - 1];
		s[lng - 1] = s[k];
		s[k] = str;
		lng--;
	}
	}

}
