#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %ldbyte(s)\n", sizeof(char));
	printf("Size of an int: %ldbyte(s)\n", sizeof(int));
	printf("Size of a long int: %ldbyte(s)\n", sizeof(long int));
	printf("Size of a long long int: %libyte(s)\n", sizeof(long long int));
	printf("Size of a long float: %ldbyte(s)\n", sizeof(float));
	return (0);
}
