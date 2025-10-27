#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the.
 * terminal using the \ character.
 *
 * @n: The number of times the character '\'
 * should be printed (length of diagonal).
 * If n is 0 or less, only a newline is printed.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int line, space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (line = 0; line < n; line++)
	{
		for (space = 0; space < line; space++)
		{
			_putchar(' ');
		}
	_putchar('\\');
	_putchar('\n');
	}
}
