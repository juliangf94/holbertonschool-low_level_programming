#include "main.h"

/**
 * create_file - Creates a file and writes a text content to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Description: If the file exists, it is truncated.
 * The created file has permissions rw-------.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);
	/*
	 * Open the file with flags:
	 * O_WRONLY: Write only access.
	 * O_CREAT: Create the file if it does not exist.
	 * O_TRUNC: Truncate the file if it exists.
	 * The permissions are set to 0600 (rw-------) for the owner.
	 */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);
	/*If text_content is not NULL, determine len and write it*/
	if (text_content != NULL)
	{
		/*Calculate length*/
		while (text_content[len])
			len++;
		/*Write the content to the file*/
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
