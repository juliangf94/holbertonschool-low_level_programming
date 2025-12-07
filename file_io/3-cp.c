#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * close_file - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
 *
 * Return: 0 on success, 100 on failure.
 */
int close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		return (100);
	}
	return (0);
}

/**
 * main - Copies the content of one file to another.
 * Usage: cp file_from file_to
 * @ac: The number of arguments.
 * @av: The argument vector.
 *
 * Return: 0 on success, or corresponding exit code on failure (97, 98, 99, 100).
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t r_count, w_count;
	char buffer[BUF_SIZE];
	const char *file_from, *file_to;
	/*Argument count check*/
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = av[1];
	file_to = av[2];
	/*Open file_from for reading*/
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	/*
	 * Open file_to for writing.
	 * Flags: O_CREAT (Create if non-existent), O_WRONLY (Write only),
	 * O_TRUNC (Truncate if existing).
	 * Permissions: 0664 (rw-rw-r--).
	 * (Exit 99)
	 */
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_file(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	/*Copy loop: Read from fd_from and write to fd_to*/
	while ((r_count = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		w_count = write(fd_to, buffer, r_count);
		/*Check for write failure*/
		if (w_count == -1 || w_count != r_count)
		{
			close_file(fd_from);
			close_file(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	/*Check for read failure (r_count == -1)*/
	if (r_count == -1)
	{
		close_file(fd_from);
		close_file(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	/*Close file descriptors*/
	if (close_file(fd_from) != 0)
		exit(100);
	if (close_file(fd_to) != 0)
		exit(100);
	return (0);
}
