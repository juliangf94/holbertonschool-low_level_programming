#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/* Standard Libraries */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct format_spec - Structure to map a format
 * character to a printing function.
 * @spec: The format specifier character (e.g., 'c', 'i', 'f', 's').
 * @f: The function pointer to the corresponding print function.
 */
typedef struct format_spec
{
	char spec;
	void (*f)(va_list list);
} format_t;


/* Function Prototypes */

/*
 * 0-sum_them_all.c: Calculates the sum of a variable number of integers.
 * @n: The count of arguments passed.
 * @...: The variable arguments.
 * Return: The sum of all parameters, or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...);

/*
 * 1-print_numbers.c: Prints a variable number
 * of integers separated by a string.
 * @separator: The string to be printed between numbers (can be NULL).
 * @n: The count of arguments passed.
 * @...: The variable arguments (integers).
 */
void print_numbers(const char *separator, const unsigned int n, ...);

/*
 * 2-print_strings.c: Prints a variable
 * number of strings separated by a string.
 * @separator: The string to be printed between strings (can be NULL).
 * @n: The count of arguments passed.
 * @...: The variable arguments (strings).
 */
void print_strings(const char *separator, const unsigned int n, ...);

/*
 * 3-print_all.c: Prints arguments of various types based on a format string.
 * @format: A string listing the types of the arguments.
 * @...: The variable arguments.
 */
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
