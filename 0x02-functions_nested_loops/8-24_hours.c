#include "main.h"

/**
 *jack_bauer - prints every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{

		for (j = 0; j <= 59; j++)
		{

			if (i <= 9)
			{
				_putchar(48);
				_putchar(i + 48);
			}
			else
			{
				_putchar(i + 48);
			}
			_putchar(58);
			if (j < 9)
			{
				_putchar(48);
				_putchar(j + 48);
			}
			else
				{
					_putchar(j + 48);
				}
		}
		_putchar('\n');
	}
}
