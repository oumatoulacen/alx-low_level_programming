#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int strln(char *s);

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: arg c
 * @av: arg v
 * Return: ptr
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, lg = 0;

	if (ac == 0 || av == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			lg++;
		}
		lg++;
	}
	lg++;

	str = malloc(sizeof(char) * lg);

	if (str == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0';  j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
