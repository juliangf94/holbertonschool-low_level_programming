#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the format string.
 * @format: A list of types of arguments passed to the function:
 * c: char, i: integer, f: float, s: char *
 * Any other char should be ignored.
 *
 * Constraints: Max 2 while, 2 if, 9 variables, no for, goto, ternary, or else.
 * Prints (nil) if a string argument is NULL.
 * Prints a new line at the end.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char *separator;
	char *nil_str;
	char *comma_space;

	va_start(args, format);
	nil_str = "(nil)";
	separator = "";
	comma_space = ", ";
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				separator = comma_space;
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				separator = comma_space;
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				separator = comma_space;
				break;
			case 's':
				printf("%s", separator);
				separator = comma_space;
				str = va_arg(args, char *);
				if (!str)
				{
					printf("%s", nil_str);
					break;
				}
				printf("%s", str);
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
