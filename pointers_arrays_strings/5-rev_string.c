#include "main.h"
/**
 * rev_string - Reverses a string (char array) in place.
 * @s: A pointer to the first character of the string to be reversed.
 *
 * This function locates the end of the string and then swaps characters
 * from the start and the end, moving the pointers towards the center
 * until they meet or cross.
 * Return: void
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char temp;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
