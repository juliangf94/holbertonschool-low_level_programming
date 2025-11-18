#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Executes a function to print a name
 * based on the function pointer.
 * @name: The string containing the name to print.
 * @f: A pointer to the function that will handle the printing logic.
 *
 * Description: This function checks if the name string
 * is valid (not NULL). If it is, it calls the function pointed
 * to by 'f', passing 'name' as its argument.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
	return;
}
