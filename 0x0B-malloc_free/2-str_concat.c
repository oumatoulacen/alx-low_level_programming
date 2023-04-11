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
		i = 0;
	if (s2 == NULL)
		j = 0;

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
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr != NULL)
	{
		for (k = 0; k < i; k++)
			ptr[k] = s1[k];
		for (l = 0; l < j; l++)
			ptr[k + l] = s2[l];
		ptr[l] = '\0';
		return (ptr);
	}
	return (0);

}
