#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: ptr
 */


char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *p = haystack;
	char *ptr = needle;

	while (*p == *ptr && *ptr != '\0')
	{
		p++;
		ptr++;
	}
	if (*ptr == '\0')
		return (haystack);
	haystack++;
	}
	return (0);

}
