#include<stdio.h>


int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %li byte(s)", sizeof(long int));
	printf("Size of a long long int: %lli byte(s)", sizeof(long long int));
	printf("Size of a long float: %d byte(s)", sizeof(float));
	return (0);
}
