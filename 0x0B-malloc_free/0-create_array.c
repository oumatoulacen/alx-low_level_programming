#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars
 * @size: size of arr
 * @c: char to fill arr with
 */


char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	long unsigned int i = 0;

	if (arr)
	{
		while (i < sizeof(char) * size)
		{
			arr[i] = c;
			i++;
		}
		return (arr);
	}
	return (0);
}
