#include "main.h"

/**
 * _atoi - Converts a string to an integer, handling signs and preceding
 * non-numeric characters.
 * @s: The string to be converted.
 *
 * Return: The converted integer value. Returns 0 if no numbers are found.
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int first_number = 0;
	int sign = 1;

	while (*s != '\0')
	{
		if (*s == ' ' && !first_number)
		{
			s++;
			continue;
		}

		if (*s == '-' && !first_number)
		{
			sign *= -1;
		}
		else if (*s == '+' && !first_number)
		{

		}

		if (*s >= '0' && *s <= '9')
		{
			first_number = 1;

			result = (result * 10) + (*s - '0');
		}
		else if (first_number == 1)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
