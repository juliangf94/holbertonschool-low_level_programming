#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The pointer to the string.
 *
 * Description: The second half is defined by n = (length + 1) / 2
 * characters for odd lengths, and length / 2 characters for even lengths.
 */
void puts_half(char *str)
{
	int i;
	int len = 0;
	int start_index;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len + 1) / 2;
	}

	start_index = len - i;

	while (str[start_index] != '\0')
	{
		_putchar(str[start_index]);
		start_index++;
	}
	_putchar('\n');
}
