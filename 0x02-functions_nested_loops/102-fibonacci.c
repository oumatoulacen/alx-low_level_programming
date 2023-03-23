#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */


int main(void)
{
	int i;
	int result = 0;

	for (i = 0; i <= 49; i++)
	{
		printf("%d\n", result);
		result += i;
	}
	return (0);
}
