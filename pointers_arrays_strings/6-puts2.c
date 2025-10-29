#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first.
 * @str: The pointer to the string.
 *
 * Description: Iterates through the string, printing characters at indices
 * 0, 2, 4, 6, etc., until the null terminator is reached.
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
