#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints a variable number of integers followed by a newline.
 * @separator: The string to be printed between numbers. Can be NULL.
 * @n: The number of integers passed to the function.
 * @...: The integers to print.
 *
 * Description: If separator is not NULL, it is printed between each number.
 * A newline is printed at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
