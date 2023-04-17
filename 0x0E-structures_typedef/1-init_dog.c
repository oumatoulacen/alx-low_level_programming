#include "dog.h"
#include <stdlib.h>
/**
 * _strcpy - copies the string
 * @dest: ptr
 * @src: ptr too
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i])
		i++;

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
/**
 * _strlen - returns the length of a string.
 * @s :pts
 * Return: length of a string
 */

int _strlen(char *s)
{
	int lng = 0;

	while (s[lng])
	{
		lng++;
	}
	return (lng);
}

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
	(*d).name = malloc(_strlen(name));
	(*d).owner = malloc(_strlen(owner));

	_strcpy((*d).name, name);
	_strcpy((*d).owner, owner);
	(*d).age = age;
}
