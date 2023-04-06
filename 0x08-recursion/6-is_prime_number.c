#include "main.h"

int check(int n, int i);

/**
 * is_prime_number - test input integer
 * @n: integer
 * @i: iter
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		 return (1);
	}
	return (check(n, n - 1));
}

/**
 * check - test input integer
 * @n: int
 * @i: iter
 * Return: 0 if not prime
 */

int check(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
		return (0);
	return (check(n, i - 1));
}
