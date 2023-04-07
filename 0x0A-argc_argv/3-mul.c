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
	if (argc == 3)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");
	return (0);
}
