#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_WORD_LENGTH 100
/**
 * get_word_count - sgmnts
 * @str: string
 * Return: num of sgmts
 */

int get_word_count(char *str)
{
	int count = 0;
	char last = ' ';

	while (*str != '\0')
	{
		if (last == ' ' && *str != ' ')
		{
			count++;
		}
		last = *str;
		str++;
	}
	return (count);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: ptr to an arr
 */

char **strtow(char *str)
{
	char **words;
	char *start, *word;
	int k, j, i = 0, word_count, word_length;

	if (str == NULL || *str == '\0' || (*str == " " && *(str + 1) == '\0'))
		return (0);
	word_count = get_word_count(str);
	words = (char **) malloc(sizeof(char *) * (word_count + 1));
	if (words == NULL)
		return (0);
	while (*str != '\0')
	{
		if (*str == ' ')
		{
			str++;
			continue;
		} start = str;
		while (*str != ' ' && *str != '\0')
			str++;
		word_length = str - start;
		if (word_length > MAX_WORD_LENGTH)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (0);
		}
		word = (char *) malloc(sizeof(char) * (word_length + 1));
		if (word == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (0);
		}
		for (k = 0; k < word_length; k++)
			word[k] = start[k];
		word[word_length] = '\0', words[i] = word, i++;
	} words[i] = NULL;
	return (words);
}
