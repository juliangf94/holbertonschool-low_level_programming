#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - Searches for the first integer
 * element that satisfies a condition.
 * @array: A pointer to the array of integers to be searched.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function used to compare values.
 * It returns non-zero if the element matches the search criteria.
 *
 * Return: The index of the first matching element.
 * Returns -1 if no element matches, or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
