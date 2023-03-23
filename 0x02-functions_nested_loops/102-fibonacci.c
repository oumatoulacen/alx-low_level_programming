#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */


int main(void)
{

	int a = 1, b = 2;
	int fib[50] = {a, b};

	for (int i = 2; i < 50; i++)
	{
		int c = a + b;

		fib[i] = c;
		a = b;
		b = c;
	}
	printf("%d", fib[0]);
	for (int i = 1; i < 50; i++)
	{
		printf(", %d", fib[i]);
	}
	printf("\n");
	return (0);
}
