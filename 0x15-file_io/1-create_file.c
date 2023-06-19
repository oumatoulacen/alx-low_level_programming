#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int w;
	int i = 0;

	if (filename == NULL)
		return (-1);
	w = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (w == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i])
		i++;
	if (text_content != NULL)
	{
		if (write(w, text_content, i) != i)
		{
			close(w);
			return (-1);
		}
	}
	close(w);
	return (1);
}