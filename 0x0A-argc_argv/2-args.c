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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
