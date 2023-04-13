#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concates n chars of s2 with s1
 * @s1: first
 * @s2: second
 * @n: num
 * Return: ptr to new allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int l1 = 0, l2 = 0, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;
	ptr = malloc(sizeof(char) * (l1 + n + 1));

	if (ptr == NULL)
		return (0);
	for (j = 0; j < l1; j++)
	{
		ptr[j] = s1[j];
	}
	for (i = 0; i < n && n <= l2; i++)
	{
		ptr[i + j] = s2[i];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
