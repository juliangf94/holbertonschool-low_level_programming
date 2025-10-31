#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The string to be modified (a pointer to the first character).
 *
 * This function iterates through the string character by character. If a
 * character falls within the ASCII range of lowercase letters ('a' to 'z'),
 * it is converted to its uppercase equivalent by subtracting 32 from its
 * ASCII value.
 *
 * Return: A pointer to the modified string (str).
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
