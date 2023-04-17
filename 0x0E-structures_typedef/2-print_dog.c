#include <stdio.h>
#include "dog.h"


/**
 * print_dog - print struct dog
 * @d: struct sog
 * Return: void
 */


void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("0\n");
	else
		printf("Name: %f\n", d->age);
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("Name: %s\n", d->owner);
}
