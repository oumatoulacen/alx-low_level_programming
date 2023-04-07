#include <stdlib.h>
#include <stdio.h>


/**
 * main - check the code
 * @argc: number of args
 * @argv: array of size argc
 * Return: always 0
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	int i, res = 0;

	for (i = 0; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0)
		{
			res += atoi(argv[i]);
		}
		else
			printf("Error\n");

	}
	printf("%d\n", res);
	return (0);
}
