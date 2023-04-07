#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


/**
 * main - check the code
 * @argc: number of args
 * @argv: array of size argc
 * Return: always 0
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	int i, res = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			res = res + atoi(argv[i]);
		}
		printf("Error\n");
		return (1);
	}
	printf("%d\n", res);
	return (0);
}
