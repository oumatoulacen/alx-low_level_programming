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
		if (atoi(argv[i]) >= 0 && isdigit(atoi(argv[i]))
		{
			res += atoi(argv[i]);
		}
		else if (isalpha(argv[i])
			printf("Error\n");

	}
	printf("%d\n", res);
	return (0);
}
