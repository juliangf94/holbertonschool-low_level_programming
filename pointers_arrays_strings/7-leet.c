#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet speak).
 * Replacements: a/A -> 4, e/E -> 3, o/O -> 0, t/T -> 7, l/L -> 1
 * @str: The input string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	int i, j;
	char leet[] = "aAeEoOtTlL";
	char leet_replace[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = leet_replace[j];
				break;
			}
		}
	}
	return (str);
}
