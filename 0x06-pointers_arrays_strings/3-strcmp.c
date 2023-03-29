#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: str1
 * @s2: str2
 * Return: void
 */

int _strcmp(char *s1, char *s2)
{
	int res;
	int i = 0;
	int j = 0;
	int jres = 0;
	int ires = 0;

	while (s1[i] != '\0')
	{
		ires = ires + s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		jres += s2[j];
		j++;
	}
	res = ires - jres;
	return (res);
}

