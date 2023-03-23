#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */


int main(void)
{

	int a = 1, b = 2;
	int fib[50] = {0};

	fib[0] = a;
	fib[1] = b;
	int i;

	for (i = 2; i < 50; i++)
	{
		int c = a + b;

		fib[i] = c;
		a = b;
		b = c;
	}
	printf("%d", fib[0]);
	int j;

	for (j = 1; j < 50; j++)
	{
		printf(", %d", fib[j]);
	}
	printf("\n");
	return (0);
}
