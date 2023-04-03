#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: ptr
 */


char *_strstr(char *haystack, char *needle)
{
	int i, j, k = 0;

	while(needle[k] != '\0')
		k++;
	for (i = 0; *haystack; i++)
	{
		for(j = 0; j < k; j++)
		{
			if (*haystack == *needle)
				return (haystack);
			needle++;
		}
		haystack++;
	}
	return (0);

}
