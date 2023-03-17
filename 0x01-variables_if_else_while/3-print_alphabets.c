#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 success
 */

int main(void)
{
	char l = 'a';
	char *n = '\n';

	while (l <= 'Z')
	{
	putchar(l);
	putchar(n);
	l++;
	}
	return (0);
}
