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

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	ptr = malloc(sizeof(char) * (j + i + 1));
	if (ptr != NULL)
	{
		if (s1 == NULL)
			s1 = "";
		else if (s2 == NULL)
		       	s2 = "";	
		for (k = 0; k < i; k++)
			ptr[k] = s1[k];
		for (l = 0; l <= j; l++)
			ptr[k + l] = s2[l];
		return (ptr);
	}
	return (0);

}
