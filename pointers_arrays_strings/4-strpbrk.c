#include <stddef.h>

/**
 * _strpbrk - Locates the first occurrence in the string 's' of any byte
 * from the string 'accept'.
 * @s: The main string to be scanned.
 * @accept: The string containing the characters to search for.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	
	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
