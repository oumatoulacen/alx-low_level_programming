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
	int i, j, chars, rows;
	char **arr;

	if (str == NULL || str == "")
	{
		return (0);
	}
	else
	{
		for (i = 0; str[i] != '\0' && str[i] != ' '; i++)
		{
			chars++;
			if (str[i + 1] == ' ')
				rows++;
		}
	}

	arr = malloc(sizeof(char *) * (rows + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < chars; i++)
	{
		for (j = 0; j < rows; j++)
		{
			if (str[i] != ' ')
				arr[i][j] = str[i];
			else
				break;
		}
	}

}
