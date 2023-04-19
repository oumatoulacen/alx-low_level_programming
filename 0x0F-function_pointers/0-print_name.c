#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name to print
 * @f: pointer to a func
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
}
