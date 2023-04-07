#include <stdlib.h>
#include "main.h"


/**
 * main - check the code
 * @argc: number of args
 * @argv: array of size argc
 * Return: always 0
 */

void main(int argc, char *argv)
{
	int i = 0;
	while (argv[0][i] != '0')
	{
		_putchar(argv[0][i]);
	}
}
