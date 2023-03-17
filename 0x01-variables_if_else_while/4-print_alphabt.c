#include <stdio.h>

/**
 *main - Entry Point
 *
 * Return: Always 0 success
 */

int main(void)
{
	char c = 'a';

	while (c <= 'a')
	{
	putchar(c);
	if (c == 'q' || c == 'e')
	{
	continue;
	}
	c++;
	}
	putchar('\n');

	return (0);
}
