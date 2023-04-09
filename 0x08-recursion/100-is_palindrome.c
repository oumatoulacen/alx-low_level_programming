#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: str
 * Return: int
 */
int len(char *s);
int test(char *s);

int is_palindrome(char *s)
{
	if(test(s))
		return (1);
	return (0);
}


int len(char *s)
{
	if (*s != '\0')
		return 1 + len(s++);
}

int test(char *s)
{
	int i = 0;
	int lg = len(s);

	if (s[i] != s[lg - 1])
		return (0);
	test(s++);
}
