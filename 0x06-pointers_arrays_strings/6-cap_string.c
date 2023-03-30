#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string
 * Return: ptr
 */

char *cap_string(char *str)
{
	int i = 0;
	int j;
	char *sp = ", .?!(){};";


	while (str[i])
	{
		for (j = 0; j <= 9; j++)
		{
			if (str[i] == sp[j] || str[i] == '"' || str[i] == '\n' || str[i] == '\t')
			{
				if (str[i] == ' ')
					str[i] = ' ';
				if (str[i + 1] <= 122 && str[i + 1] >= 97)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}
