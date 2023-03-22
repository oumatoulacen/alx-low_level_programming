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

		for (i = n; i > 98 ; i--)
		{
			if (i >= 100)
			{

				_putchar(i / 100 + '0');
				_putchar(((i % 100) / 10) + '0');
				_putchar(((i % 100) % 10) + '0');
			}
			else
			{
				_putchar(((i % 100) / 10) + '0');
				_putchar(((i % 100) % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n < 98 && n >= 0)
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
					_putchar(',');
					_putchar(' ');
				else if (j < 10)
				{	
					_putchar(k + '0');
					_putchar(',');
					_putchar(' ');
				}
				}else
				{
				_putchar(j + '0');
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
				}
			}
		}
	}
	
	else if (n < 0)
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
	else if (n == 98)
	{
		_putchar(9 + '0');
		-putchar(8 + '0');
		_putchar(',');
		_putchar(' ');
}
