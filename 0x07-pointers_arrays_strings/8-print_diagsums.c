#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of -
 * a square matrix of integers
 * @a: arr
 * @size: the size of elements
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int left = 0;
	int right = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		left += a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		right += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", left, right);
}
