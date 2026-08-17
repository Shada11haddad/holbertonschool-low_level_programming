#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * close_fd - closes a file descriptor or exits with code 100 on failure
 * @fd: the file descriptor to close
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * open_source - opens a file for reading or exits with code 98
 * @filename: the name of the file to open
 *
 * Return: the file descriptor of the opened file
 */
int open_source(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (fd);
}

/**
 * open_dest - creates or truncates a file for writing or exits with code 99
 * @filename: the name of the file to open
 *
 * Return: the file descriptor of the opened file
 */
int open_dest(char *filename)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (fd);
}

/**
 * copy_data - copies the content of one file descriptor into another
 * @fd_from: the file descriptor to read from
 * @fd_to: the file descriptor to write to
 * @from: the name of the source file, used in error messages
 * @to: the name of the destination file, used in error messages
 */
void copy_data(int fd_from, int fd_to, char *from, char *to)
{
	ssize_t nread, nwritten;
	char buffer[1024];

	while ((nread = read(fd_from, buffer, 1024)) > 0)
	{
		nwritten = write(fd_to, buffer, nread);
		if (nwritten != nread)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", to);
			close_fd(fd_from);
			close_fd(fd_to);
			exit(99);
		}
	}

	if (nread == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", from);
		close_fd(fd_from);
		close_fd(fd_to);
		exit(98);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments passed to the program
 * @argv: the array of arguments passed to the program
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open_source(argv[1]);
	fd_to = open_dest(argv[2]);

	copy_data(fd_from, fd_to, argv[1], argv[2]);

	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
