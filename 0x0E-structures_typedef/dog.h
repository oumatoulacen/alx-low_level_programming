#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
#endif
