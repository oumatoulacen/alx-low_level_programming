#include "main.h"
#include <stdlib.h>
#include <limits.h>


/**
 * create_array - create an array of chars
 * @size: size of arr
 * @c: char to fill arr with
 * Return: arr
 */


char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned long int i = 0;

	if (arr != NULL)
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
