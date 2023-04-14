#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 1000000
void _puts(char *str);
/**
 * print_error - if error occurs
 * Return: void
 */
void print_error(void)
{
	_puts("Error");
	_putchar('\n');
	exit(98);
}
/**
 * _puts - prints a string
 * @str: ptr
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
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
 * read_number - read number
 * @str: string
 * @num: num in str
 * Return: void
 */
void read_number(char *str, int *num)
{
	int len = _strlen(str), i;

	if (!_isdigit(str))
		print_error();
	for (i = 0; i < len; i++)
	{
		num[len - i - 1] = str[i] - '0';
	}
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
	int num1[MAX_DIGITS] = {0};
	int num2[MAX_DIGITS] = {0};
	int result[MAX_DIGITS * 2] = {0};
	int result_len, num1_len, num2_len;

	if (argc != 3)
		print_error();
	read_number(argv[1], num1);
	read_number(argv[2], num2);
	num1_len = _strlen(argv[1]);
	num2_len = _strlen(argv[2]);
	if (num1_len > MAX_DIGITS || num2_len > MAX_DIGITS)
	{
		print_error();
	}
	multiply(num1, num1_len, num2, num2_len, result);
	result_len = num1_len + num2_len - 1;
	while (result_len > 0 && result[result_len] == 0)
	{
		result_len--;
	}
	print_result(result, result_len);
	return (0);
}
