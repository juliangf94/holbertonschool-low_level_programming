#include <stdlib.h>
#include <stdio.h> /* Incluido solo para el manejo de NULL */
#include "main.h"

/**
 * _get_len - Calculates the length of a string, treating NULL as empty.
 * @s: The string.
 *
 * Return: The length of the string (0 if s is NULL).
 */
unsigned int _get_len(char *s)
{
	unsigned int len = 0;

	if (s == NULL)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * str_concat - Concatenates two strings into a newly allocated space in memory.
 * @s1: The first string.
 * @s2: The second string to append to s1.
 *
 * The function treats NULL pointers as empty strings.
 *
 * Return: A pointer to the newly allocated concatenated string,
 * or NULL on failure (e.g., if malloc fails).
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int len1, len2, total_len, i, j;

	len1 = _get_len(s1);
	len2 = _get_len(s2);
	total_len = len1 + len2 + 1;

	concat = malloc(sizeof(char) * total_len);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat[i + j] = s2[j];

	concat[total_len - 1] = '\0';
	return (concat);
}
