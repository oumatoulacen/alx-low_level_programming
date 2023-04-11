#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -   returns a pointer to a newly allocated space in memory
 * @str: str giving
 * Return: ptr
 */

char *_strdup(char *str)
{
	int i = 0, j;
	char *ptr;

	if (str == NULL)
		return (0);
	while (str[i])
		i++;
	ptr = malloc(sizeof(*str) * i + 1);

	if (ptr != NULL)
	{
		for (j = 0; j < i; j++)
			ptr[j] = str[j];
		return (ptr);
	}
	return (0);



}
