#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iter on a given array
 * @size: size of array given
 * @actioin: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
