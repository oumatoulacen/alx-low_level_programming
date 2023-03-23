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
	int i;
	int j;

	fib[0] = a;
	fib[1] = b;

	for (i = 2; i < 50; i++)
	{
		int c = a + b;

		fib[i] = c;
		a = b;
		b = c;
	}
	printf("%d", fib[0]);

	for (j = 1; j < 50; j++)
	{
		printf(", %d", fib[j]);
	}
	printf("\n");
	return (0);
}
