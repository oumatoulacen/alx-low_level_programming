#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 success
 */

int main(void)
{
	int d = 0;
	int c = 9;

	while (d < 9)
	{
	putchar(d + '0');
	putchar(',');
	putchar(' ');
	d++;
	}
	putchar(c + '0\n');
	return (0);
}
