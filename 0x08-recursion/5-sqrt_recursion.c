#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: num
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	int res = 1;
	int num = 1;

	if (n == 0 || n == 1)
		return (n);
	while (res <= n)
	{
		res = num * num;
		if (res == n && num <= n)
			return (num);
		num++;
	}
	return (-1);

}
