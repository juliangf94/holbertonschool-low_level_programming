#include "main.h"

/**
 * jack_bauer - Prints every minute of the day from 00:00 to 23:59.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h, m;
	int h1, h2;
	int m1, m2;

	for (h = 0; h <=  23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			h1 = h / 10;
			h2 = h % 10;
			m1 = m / 10;
			m2 = m % 10;
			_putchar(h1 + '0');
			_putchar(h2 + '0');
			_putchar(':');
			_putchar(m1 + '0');
			_putchar(m2 + '0');
			_putchar('\n');
		}
	}
}
