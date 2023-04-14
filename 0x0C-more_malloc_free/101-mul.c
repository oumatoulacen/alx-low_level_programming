#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_error - if error occurs
 * Return: void
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _strlen - returns the length of a string.
 * @s :pts
 * Return: length of a string
 */
int _strlen(char *s)
{
	int lng = 0;

	while (s[lng])
		lng++;
	return (lng);
}

/**
 * _isdigit - checks if is gigit
 * @s: string
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int _isdigit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	i++;
	}
	return (1);
}
/**
 * main - check code
 * @argc: arg count
 * @argv: arg vect
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char *str1, *str2;
	int num1, num2, *res, len, len1, len2, m = 0, i, carry;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !_isdigit(str1) || !_isdigit(str2))
		print_error();
	len1 = _strlen(str1);
	len2 = _strlen(str2);
	len = len1 + len2 + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		res[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = str1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(str2) - 1; len2 >= 0; len2--)
		{
			num2 = str2[len2] - '0';
			carry += res[len1 + len2 + 1] + (num1 * num2);
			res[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (res[i])
			m = 1;
		if (m)
			_putchar(res[i] + '0');
	}
	if (!m)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
