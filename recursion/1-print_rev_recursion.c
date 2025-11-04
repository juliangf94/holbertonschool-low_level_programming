#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: The string to be printed in reverse.
 *
 * This function uses a post-order recursive approach:
 * 1. It checks the base case (null terminator).
 * 2. It calls itself with the next character (s + 1).
 * 3. Only after the recursive call returns (i.e., when the end of the
 * string is reached and the stack starts unwinding), does it print
 * the current character.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
