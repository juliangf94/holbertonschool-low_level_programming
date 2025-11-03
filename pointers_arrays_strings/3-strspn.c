#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * This function calculates the length (in bytes) of the initial segment of 's'
 * which consists entirely of characters found in 'accept'.
 *
 * Return: The number of characters in the
 * initial segment of s that match accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int found;
	int i;

	while (s[n] != '\0')
	{
		found = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[n] == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (found)
		{
			n++;
		}
		else
		{
			break;
		}
	}
	return (n);
}
