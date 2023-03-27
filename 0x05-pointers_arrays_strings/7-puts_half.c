#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	char str;
	int lng;
	int k;

	lng = 0;
	while (s[i])
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
}
