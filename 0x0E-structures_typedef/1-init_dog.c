#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initialize variable d
 * @d: var
 * @name: value of mem1
 * @age: value of mem2
 * @owner: value of mem3
 * Return:void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
