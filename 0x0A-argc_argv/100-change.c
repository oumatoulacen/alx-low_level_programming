#include <stdlib.h>
#include <stdio.h>


/**
 * main - check the code
 * @argc: number of args
 * @argv: array of size argc
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int cent;
	int coins[] = {25, 10, 5, 2, 1};
	int num, i, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i  = 0; i < 5; i++)
	{
		num = cent / coins[i];
		count = count + num;
		cent = cent - num * coins[i];

	}
	printf("%d\n", count);
	return (0);
}
