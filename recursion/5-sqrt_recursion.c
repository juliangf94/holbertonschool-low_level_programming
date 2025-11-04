#include "main.h"

/**
 * _check_root - Helper function to recursively find the natural square root.
 * @n: The number to find the square root of.
 * @i: The current integer guess, starting from 1.
 *
 * Return: The square root if found, or -1 if no natural square root exists.
 */
int _check_root(int n, int i)
{
	long square = (long) i * i;

	if (square == n)
	{
		return (i);
	}
	if (square > n)
	{
		return (-1);
	}
	return (_check_root(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if n is negative
 * or does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (0);
	}

	return (_check_root(n, 1));
}
