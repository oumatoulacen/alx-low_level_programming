#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 success
 */

int main(void)
{
	char l = 'a';
	char L = l + 26;

	while (l <= 'Z')
	{
	putchar(l);
	putchar(L);
	putchar('\n');
	l++;
	}
	return (0);
}
