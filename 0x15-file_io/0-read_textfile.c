#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>

#define MAX_LEN 1024

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of chars to read
 * Return: number of chars readed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf[MAX_LEN];
	int read_chars, fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read_chars = read(fd, buf, letters);
	if (read_chars == -1)
		return (0);
	close(fd);
	if (write(STDOUT_FILENO, buf, read_chars) != read_chars)
		return (0);

	return (read_chars);
}
