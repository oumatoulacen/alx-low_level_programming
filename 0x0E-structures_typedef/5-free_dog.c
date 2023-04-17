#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog
 * @d: struct dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d->name == NULL)
		free(d);

	if (d->owner == NULL)
		free(d->name);
	free(d);
}
