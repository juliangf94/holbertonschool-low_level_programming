#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: A pointer to the string to be printed.
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *reverse = s;

	while (*reverse != '\0')
	{
		reverse++;
	}

	reverse--;

	while (reverse >= s)
	{
		_putchar(*reverse);
		reverse--;
	}
	_putchar('\n');
}
