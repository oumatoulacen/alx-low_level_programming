#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long fib1 = 0,	fib2 = 1, result;

	for (i = 0; i < 50; i++)
	{
		result = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

