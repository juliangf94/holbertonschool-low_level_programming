#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints a variable number of strings followed by a newline.
 * @separator: The string to be printed between strings. Can be NULL.
 * @n: The number of strings passed to the function.
 * @...: The strings to print.
 *
 * Description: If separator is not NULL, it is printed between each string.
 * If a string is NULL, it prints "(nil)" instead.
 * A newline is printed at the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
