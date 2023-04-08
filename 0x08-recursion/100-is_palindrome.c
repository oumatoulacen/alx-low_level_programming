#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: str
 * Return: int
 */
int test(char *s);

int is_palindrome(char *s)
{
	if(test(s))
		return (1);
	return (0);
}


int test(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
		i++;
	for(j = 0; j < i; j++)
	{
		i--;
		if (s[i] != s[j])
			return (0);
	}
	return (1);
}
