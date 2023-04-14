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
 * multiply - mul
 * @num1: number1
 * @num2: number2
 * @num2_len: length of num2
 * @num1_len: length of num1
 * @result: result of mul num1 with num2
 * Return: void
 */

void multiply(int *num1, int num1_len, int *num2, int num2_len, int *result)
{
	int carry, i, j, product;

	for (i = 0; i < num2_len; i++)
	{
		carry = 0;
		for (j = 0; j < num1_len; j++)
		{
			product = num1[j] * num2[i] + carry + result[i + j];
			result[i + j] = product % 10;
			carry = product / 10;
		}
		result[i + num1_len] = carry;
	}
}
/**
 * print_result - prints result
 * @result: result itself
 * @result_len: result lenght
 * Return: void
 */

void print_result(int *result, int result_len)
{
	int i;

	_putchar(result[result_len] + 48);
	for (i = result_len - 1; i >= 0; i--)
	{
		_putchar(result[i] + 48);
	}
	_putchar('\n');
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
		return (0);
	for (i = 0; i <= len1 + len2; i++)
		res[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = str1[len1] - '0';
		carry = 0;
		for (len2 = len2 - 1; len2 >= 0; len2--)
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
