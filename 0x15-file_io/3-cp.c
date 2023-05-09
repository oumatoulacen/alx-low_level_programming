#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUF_SIZE 1024

void error_handler(ssize_t *r, int *from, int *to, char *f_from);

/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vec
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	int fd_to, fd_from;
	ssize_t num_read;
	char buf[BUF_SIZE];
	ssize_t num_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	while ((num_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		num_written = write(fd_to, buf, num_read);
		if (num_written != num_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			exit(99);
		}
	}
	error_handler(&num_read, &fd_from, &fd_to, file_from);
	return (0);
}

/**
 * error_handler - handles errors
 * @r: num read
 * @from: fd of from
 * @to: fd of to
 * @f_from: file from
 */
void error_handler(ssize_t *r, int *from, int *to, char *f_from)
{
	if (*r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", f_from);
		exit(98);
	}
	if (close(*from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *from);
		exit(100);
	}
	if (close(*to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *to);
		exit(100);
	}
}
