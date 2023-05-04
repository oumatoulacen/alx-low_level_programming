#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks a system if it's little endian or big endian
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *p = (char *)&num;

	return (*p == 1);  /* Returns 1 if little endian, 0 if big endian*/
}

