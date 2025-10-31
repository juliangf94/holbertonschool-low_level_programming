#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be modified.
 *
 * This function iterates through the string, capitalizing any lowercase
 * letter that immediately follows one of the defined word separators
 * (space, tab, newline, comma, semicolon, period, exclamation mark,
 * question mark, double quote, parentheses, and curly braces) or is the
 * first character of the string.
 *
 * Return: A pointer to the modified string (str).
 */
char *cap_string(char *str)
{
	int i;
	int word_flag = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		int j;
		int char_separator = 0;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				char_separator = 1;
				break;
			}
		}

		if (char_separator)
		{
			word_flag = 1;
		}
		else
		{
			if (word_flag && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
			}
			word_flag = 0;
		}
	}
	return (str);
}
