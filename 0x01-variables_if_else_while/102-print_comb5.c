#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 success
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			if (i == j)
				continue;
			if (i < 10)
			{
				putchar('0' + i / 10);
				putchar('0' + i % 10);
			}
			else
			{
				putchar('0' + i / 10);
				putchar('0' + i % 10);
				putchar(' ');
				if (j < 10)
				{
					putchar('0' + j / 10);
					putchar('0' + j % 10);
				}
				else
				{
					putchar('0' + j / 10);
					putchar('0' + j % 10);
				}
				putchar(',');
				putchar(' ');
			}
		}
		return (0);
	}
}
