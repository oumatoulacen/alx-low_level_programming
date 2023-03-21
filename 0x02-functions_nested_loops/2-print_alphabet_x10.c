#include "main.h"

/**
 * print_alphabet_x10 - 10 times aphabit .
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (i; i <= 9; i++)
	{
		int j = 'a';

		for (j ; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
}
