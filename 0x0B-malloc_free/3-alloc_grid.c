#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: lng
 * @height: tall
 * Return: ptr to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;


	if (width <= 0 || height <= 0)
		return (0);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (0);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i;j++)
				free(ptr[j]);
			free(ptr);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
