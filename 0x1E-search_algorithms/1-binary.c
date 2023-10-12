#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, mid;

	left = 0, right = size - 1;
	if (!array)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right + 1; i++)
		{
			if (i != right)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");
		mid = (right + left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);

}
