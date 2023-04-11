#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * str_concat - concatenates two strings
 * @s1: first
 * @s2: second
 * Return: ptr
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k, l;
	char *ptr;

	if (s1 == NULL)
		s1[0] = 0;
	if (s2 == NULL)
		s2[0] = 0;

	if (s1 != NULL)
	{
	while (s1[i])
		i++;
	}
	if (s2 != NULL)
	{
	while (s2[j])
		j++;
	}
	if (s1 == NULL)
		ptr = malloc(sizeof(char) * (j + 1));
	else if (s2 == NULL)
		ptr = malloc(sizeof(char) * (i + 1));
	else
		ptr = malloc(sizeof(char) * 1);
	if (ptr != NULL)
	{
		if (s1 != NULL)
		{
		for (k = 0; k < i; k++)
			ptr[k] = s1[k];
		}
		if (s2 != NULL)
		{
		for (l = 0; l <= j; l++)
			ptr[k + l] = s2[l];
		}
		return (ptr);
	}
	return (0);

}
