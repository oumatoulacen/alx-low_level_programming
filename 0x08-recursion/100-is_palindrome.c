#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: str
 * Return: int
 */
int len(char *s);
int test(char *s, int i, int x);

int is_palindrome(char *s)
{
	int x = len(s);

	if (*s == '\0')
		return (1);
	else if (test(s , 0, x))
		return (1);
	return (0);
}


int len(char *s)
{
	if (*s != '\0')
		return (1 + len(s + 1));
	return (0);
}

int test(char *s, int i, int x)
{

	if (s[i] != s[x - 1])
		return (0);
	if (i >= x)
		return (1);
	return (test(s, i + 1, x - 1));

}

