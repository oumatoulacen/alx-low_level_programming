#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string
 * Return: ptr to an arr
 */

char **strtow(char *str)
{
	int i, j, chars, rows, m = 0;
	char **arr;

	if (str == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; str[i] != '\0' && str[i] != ' '; i++)
		{
			if (str[i + 1] == ' ')
				rows++;
		}
		rows++;
	}

	arr = malloc(sizeof(char *) * (rows));
	if (arr == NULL)
		return (NULL);
	chars = 0;
	for (i = 0; str[i] != '\0' && str[i] != ' '; i++)
	{
		chars++;
		if (str[i + 1] == ' ')
		{
			arr[m] = malloc(sizeof(char) * chars);
			chars = 0;
			m++;
		}

	}
	for (i = 0; i < rows; i++)
	{
		for (j = 0; str[j] != '\0' && str[j] != ' '; j++)
		{		
			arr[i][j] = str[j];
			if (str[i + 1] == ' ')
				break;
		}
	}
	return (arr);
}
