#include "dog.h"

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
	struct dog *b;
	
	b = d;
	(*b).name = name;
	(*b).age = age;
	(*b).owner = owner;
}
