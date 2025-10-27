#include "main.h"

/**
 *_isupper - Checks for uppercase character.
 *@c: The character to be checked.
 *
 * Description: Compares the character´s ASCII value to the
 * range of 'A' (65) through 'Z' (90).
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
