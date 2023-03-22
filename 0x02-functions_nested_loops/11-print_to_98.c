#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *@n: num
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			if (i >= 100)
			{
				_putchar(i / 100);
				_putchar(((i % 100) / 10) + '0');
				_putchar(((i % 100) % 10) + '0');
			}
			else
			{
				_putchar(((i % 100) / 10) + '0');
				_putchar(((i % 100) % 10) + '0');
			}
		}
	}
	else if (n <= 98)
	{
		int j;

		for (j = n; j >= 98; j++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
	}

}
