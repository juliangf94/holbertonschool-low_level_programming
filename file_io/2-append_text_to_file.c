#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 * Does not create the file if it does not exist.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);
	/*Open the file in Write-Only and Append mode*/
	/*If O-CREAT is missing, open will fail*/
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	/*If text_content is not NULL, process the writing*/
	if (text_content != NULL)
	{
		/*Calculate length of string*/
		while (text_content[len])
			len++;
		/*Write the content to the file.*/
		/*O_APPEND ensures writing starts at the end*/
		bytes_written = write(fd, text_content, len);
		/*Check for write failure or short write*/
		if (bytes_written < 0 || bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}
	/*Close the file descriptor*/
	if (close(fd) < 0)
		return (-1);
	/*Success*/
	return (1);
}
