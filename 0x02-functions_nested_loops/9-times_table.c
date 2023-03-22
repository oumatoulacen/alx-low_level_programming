#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int value = i * j;

			if (value < 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(value / 10 + '0');
			}
		_putchar(value % 10 + '0');
		if (j != 9)
		{
		_putchar(',');
		_putchar(' ');
		}
		}
	}

}
