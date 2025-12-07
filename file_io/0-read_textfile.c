#include "main.h"

/**
 * read_textfile - Reads a text file and prints it
 * to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The maximum number of letters it should read and print.
 *
 * Description: Uses the system calls open, read, write, and close.
 *
 * Return: The actual number of letters it could read and print.
 * 0 if the file cannot be opened or read, if filename is NULL,
 * or if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);
	/*Allocate memory, use letters as the size of the buffer*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	/*Open the file in read-only mode*/
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}
	/*Read content from the file into buffer*/
	bytes_read = read(fd, buffer, letters);
	if (bytes_read < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	/*Write content to standard output*/
	/*bytes_read ensures we write the content read, not the buffer*/
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	/*Clean up*/
	free(buffer);
	close(fd);
	/*Check if write was successful and wrote the expected number*/
	if (bytes_written < 0 || bytes_written != bytes_read)
		return (0);
	/*Return number of bytes written*/
	return (bytes_written);
}
