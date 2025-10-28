#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using the '#' character.
 *
 * @size: The size of the triangle (number of rows).
 * If size is 0 or less, only a new line is printed.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int space, row, symbol;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
		{
			_putchar(' ');
		}
		for (symbol = 0; symbol < row; symbol++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
