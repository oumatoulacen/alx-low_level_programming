#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: from ....
 * @max: ...... to
 * Return: ptr to the new array
 */

int *array_range(int min, int max)
{
	int *arr;
	int res = max - min + 1;
	int i = 0;

	if (res < 0)
		return (0);

	arr = malloc(sizeof(int) * res);
	if (arr == NULL)
		return (0);
	for (; min <= max; min++)
	{
		arr[i] = min;
		i++;
	}
	return (arr);
}
