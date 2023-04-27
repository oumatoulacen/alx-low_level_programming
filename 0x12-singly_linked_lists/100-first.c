#include <stdio.h>

/**
 * print_message - print the message
 */


void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
		    "I bore my house upon my back!\n");
}


/**
 * before_main - beform main
 */

static void __attribute__((constructor)) before_main(void)
{
	print_message();
}
