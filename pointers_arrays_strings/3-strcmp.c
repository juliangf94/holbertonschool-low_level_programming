#include "main.h"

/**
 * _strcmp - Compares two strings character by character.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * This function performs a lexicographical comparison.
 * The comparison is done using the ASCII values of the characters.
 *
 * Return:
 * 1. 0 if s1 and s2 are equal.
 * 2. A negative value if the first non-matching character in s1
 * is less than that in s2 (s1 < s2).
 * 3. A positive value if the first non-matching character in s1
 * is greater than that in s2 (s1 > s2).
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++

	return (s1[i] - s2[2]);
}
