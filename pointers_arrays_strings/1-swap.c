#include "main.h"

/**
 * swap_int - Swaps the values of two integers using pointers.
 * @a: The pointer to the first integer.
 * @b: The pointer to the second integer.
 *
 * Description: Uses a temporary variable to hold the value of the first
 * integer while performing the swap operation on the values pointed to by
 * the pointers 'a' and 'b'.
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
