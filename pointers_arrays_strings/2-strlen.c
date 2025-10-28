#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to the string (char array) to be measured.
 *
 * Description: This function iterates through the string
 * using pointer arithmetic,
 * counting characters until it encounters the null terminator ('\0').
 * Return: The length of the string (integer).
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
