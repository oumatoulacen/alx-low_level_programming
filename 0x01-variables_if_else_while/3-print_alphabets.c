#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 success
 */

int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
	char L = l + 26;

	putchar(l);
	putchar(L);
	l++;
	}
	putchar('\n');
	return (0);
}
