#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function given as a parameter on each element
 * of an array.
 * @array: The integer array to iterate over.
 * @size: The size (number of elements) of the array.
 * @action: A pointer to the function to be executed on each element.
 *
 * Description: Iterates through the array and calls the 'action' function
 * for every element. It includes necessary checks for NULL pointers.
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
