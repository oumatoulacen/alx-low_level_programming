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
	int c = 0;

	for (i = 0; i <= 49; i++)
	{
		c = c + i + 1
		result = result + i;
		printf("%d, ", result + c);
	}
	printf("\n");
	return (0);
}
