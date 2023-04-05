#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: num
 * @i: iter
 * Return: square root of n
 */
int find_square(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_square(n, 0));
}

/**
 * find_square - find the square root
 * @i: iter
 * @n: num
 * Return: square root
 */

int find_square(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_square(n, i + 1));
}
