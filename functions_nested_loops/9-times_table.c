#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Description: Prints the table in the required format using _putchar.
 *
 * Return: void
 */
void times_table(void)
{
	int row, col, mul;
	int d, u;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			mul = row * col;
			if (mul >= 10)
			{
				d = mul / 10;
				u = mul % 10;

				_putchar(d + '0');
				_putchar(u + '0');
			} else
			{
				if (col != 0)
				{
					_putchar(' ');
				}
				_putchar(mul + '0');
			}

			if (col == 9)
			{
				continue;
			} else if (col != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
