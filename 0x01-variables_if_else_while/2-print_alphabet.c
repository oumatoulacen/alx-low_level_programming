#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char a;

	a = "a";
	while (a < "z")
	{
		putchar("%c", a);
		a++;
	}
	return (0);
}
