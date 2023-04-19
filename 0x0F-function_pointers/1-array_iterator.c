#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iter on a given array
 * @size: size of array given
 * @action: pointer to function
 * @array: arr
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
