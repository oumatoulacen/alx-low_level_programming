#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int lng;
	int k;

	lng = 0;
	while (str[i])
	{
		lng++;
		i++;
	}
	if (lng % 2 == 1)
	{
	for (k = (lng - 1) / 2; k <= lng; k++)
	{
		_putchar(str[k]);
	}
	}
	else
	{
		for (k = lng / 2; k <= lng; k++)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
