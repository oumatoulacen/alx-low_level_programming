#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 success
 */

int main(void)
{
	char l = 'A';

	while (l <= 'Z')
	{
	char L = l + 26;

	putchar(L);
	putchar(l);
	l++;
	}
	putchar('\n');
	return (0);
}
