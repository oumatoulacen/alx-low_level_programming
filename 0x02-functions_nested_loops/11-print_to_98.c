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
			_putchar(i);
		}
	}
	else if (n < 98)
	{
		int j;

		for (i = n; i >= 98; i++)
		{
			_putchar(i);
		}
	else
		_putchar(n);

}
