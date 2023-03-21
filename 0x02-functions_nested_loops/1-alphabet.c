#include "main.c"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{	
	print_alphabet(a);
	}
	print_alphabet('\n');
	return (0);
}
