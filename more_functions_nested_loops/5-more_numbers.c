#include "main.h"

/**
 * more_numbers - Prints the numbers from 0 to 14 ten times,
 * followed by a new line after each sequence.
 *
 * Restriction: Can only use _putchar exactly three times.
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
	_putchar('\n');
	}
}
