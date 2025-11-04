#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two main
 * diagonals of a square matrix.
 * @a: A pointer to the start of the square matrix
 * (treated as a flattened 1D array).
 * @size: The size of the square matrix
 * (e.g., 3 for a 3x3 matrix).
 *
 * This function calculates the sum of the primary diagonal
 * (indices 0, size+1, 2*size+2, ...)
 * and the secondary diagonal (indices size-1, 2*size-2, 3*size-3, ...)
 * and prints them in the format "sum1, sum2".
 */
void print_diagsums(int *a, int size)
{
	int i;
	int primary_sum = 0;
	int secondary_sum = 0;

	for (i = 0; i < size; i++)
	{
		primary_sum += a[(i * size) + i];
		secondary_sum += a[(i *  size) + (size - i - 1)];
	}
	printf("%d, %d\n", primary_sum, secondary_sum);
}
