#include "main.h"

/**
 * reset_to_98 - Takes a pointer to an int and update
 * the value it points to to 98.
 * @n: A pointer to an integer that will be updated.
 *
 * Description: This function uses the dereference operator (*) to directly
 * modify the value stored at the memory address held by the pointer 'n'.
 * Return: void
 */
void reset_to_98(int *n)
{
	*n = 98;
}
