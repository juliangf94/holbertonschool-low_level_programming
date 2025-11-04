#include "main.h"

/**
 * print_chessboard - Prints the given 8x8
 * chessboard represented by a 2D array.
 * @a: The 8x8 array of characters representing the chessboard.
 * (char (*a)[8] is a pointer to an array of 8 characters).
 *
 * This function iterates through the 8 rows and 8 columns of the board,
 * printing each character, and adds a newline character after each row.
 */
void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
