#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc and checks the result.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails (returns NULL), the process terminates with status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *test;

	test = malloc(b);
	if (test == NULL)
		exit(98);
	return (test);
}
