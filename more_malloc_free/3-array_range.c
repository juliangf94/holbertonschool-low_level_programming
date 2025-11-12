#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers ordered from min to max.
 * @min: The starting integer (included).
 * @max: The ending integer (included).
 *
 * Return: A pointer to the newly created array, or NULL if min > max
 * or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return (arr);
}
