#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */


int main(void)
{
	int a = 1;
	int c = 2;
	int fib[50] = {a, c};
	int i;

	for (i = 1; i <= 49; i++)
	{
		int b = a + c;

		fib[i] = b;
		a = c;
		c = b;
	}
	printf("%d", fib[0]);
	for (i = 1; i <= 49; i++)
	{
		printf(", %d", fib[i]);
	}
	printf("\n");
	return (0);
}
