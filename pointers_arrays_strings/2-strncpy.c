#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: The destination buffer where the string will be copied.
 * @src: The source string to copy.
 * @n: The maximum number of bytes to copy.
 *
 * The function copies up to 'n' characters from the string pointed to by 'src'
 * to the buffer pointed to by 'dest'.
 *
 * Standard behavior:
 * 1. If 'src' is less than 'n' characters long, the remainder of 'dest'
 * (up to the total of 'n' bytes) is padded with null bytes ('\0').
 * 2. If 'src' is 'n' characters or longer, 'dest' will NOT be null-terminated
 *
 * Return: A pointer to the destination string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
