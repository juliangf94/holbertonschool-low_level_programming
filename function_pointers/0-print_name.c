#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Executes a function to print a name
 * based on the function pointer.
 * @name: The string containing the name to print.
 * @f: A pointer to the function that will handle the printing logic.
 *
 * Description: This function checks if both the name string and the function
 * pointer are valid (not NULL). If they are, it calls the function pointed
 * to by 'f', passing 'name' as its argument.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
