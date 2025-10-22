#include "main.h"

/**
 * _isalpha - Checks for alphabeltic character.
 * @c: The character (ASCII value) to be checked.
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	/*
	 * Checks if the character is in the lowercase range
	 *or in the uppercase range.
	 */
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
