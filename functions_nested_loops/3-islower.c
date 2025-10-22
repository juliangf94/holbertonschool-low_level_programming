#include "main.h"

/**
 * _islower - Checks for a lowercase character.
 * @c: The character to be checked (ASCII value).
 *
 * Return: 1 if c is a lowercase letter, 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
