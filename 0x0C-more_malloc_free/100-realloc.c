#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _realloc - reallocate space in memory
 * @ptr: old ptr
 * @old_size: old size
 * @new_size: new size
 * Return: new ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned char *nstr;
	unsigned char *ostr;
	unsigned int i;
	size_t copy_size;

	if (new_size == 0)
	{
		free(ptr);
		return (0);
	}
	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		free(ptr);
		return (0);
	}

	ostr = ptr;
	nstr = new_ptr;
	copy_size = old_size <= new_size ? old_size : new_size;
	for (i = 0; i < copy_size; i++)
	{
		nstr[i] = ostr[i];
	}
	free(ptr);
	return (new_ptr);
}
