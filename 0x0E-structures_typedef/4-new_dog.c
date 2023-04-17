#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *dest, char *src);
int _strlen(char *s);
/**
 * new_dog - create new dog
 * @name: name field
 * @age: age field
 * @owner: owner field
 * Return: dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (0);

	dog->name = malloc(_strlen(name) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (0);
	}
	dog->owner = malloc(_strlen(owner) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (0);
	}

	_strcpy(dog->owner, owner);
	_strcpy(dog->name, name);
	dog->age = age;

	return (dog);
}

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
