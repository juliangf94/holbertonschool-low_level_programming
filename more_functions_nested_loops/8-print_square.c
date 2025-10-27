#include "main.h"

/**
 * print_square - Prints a square of size 'size' using the # character.
 *
 * @size: The size of the square (height and width).
 * If size is 0 or less, prints only a newline.
 *
 * Return: void
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}
