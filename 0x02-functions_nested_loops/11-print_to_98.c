#include "main.h"

/**
 * greater - for big then
 *@n: nm
 */

void greater(int n)
{
	int i;
	int c;
	int b;
	int d;

	for (i = n / 100 ; i > 0 ; i--)
	{
		for (b = n / 10; b >= 9; b--)
		{
			for (d = n % 10; d > 8; d++)
				{
				_putchar(i / 100 + '0');
				_putchar(((i % 100) / 10) + '0');
				_putchar(((i % 100) % 10) + '0');
				_putchar(',');
				_putchar(' ');
				}
		}
	}

}

/**
 * between - for around
 *@n:nmb
 */

void between(int n)
{
	if (n < 98 && n >= 0)
	{
		int j;
		int k;

		for (j = n / 10; j >= 9; j++)
		{
			for (k = n % 10; k >= 8; k++)
			{
				if (j == 0)
				{
					_putchar('0');
					_putchar(' ');
					_putchar('\n');
				}
				else if (j < 10)
				{
					_putchar(k + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
				_putchar(j + '0');
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
				}
			}
		}
	}
}

/**
 * less - for small
 *@n: nnn
 */
void less(int n)

{
	int l;
	int g;

	for (l = n / 10; l >= 9; l++)
	{
		for (g = n % 10; g >= 8; g++)
		{
			if (l == 0)
			{
				_putchar('-');
				_putchar(-g + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (l >= -9)
			{
				_putchar('-');
				_putchar(-l + '0');
				_putchar(-g + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('-');
				_putchar((-l / 10) + '0');
				_putchar(-l + '0');
				_putchar(-g + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: num
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		greater(n);
	}
	else if (n < 98 && n >= 0)
	{
		between(n);
	}
	else if (n < 0)
	{
		less(n);
	}
	else if (n == 98)
	{
		_putchar(9 + '0');
		_putchar(8 + '0');
		_putchar(' ');
		_putchar('\n');
	}
}
