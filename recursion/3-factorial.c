#include "main.h"

/**
 * factorial - Calculates the factorial of a given number recursively.
 * @n: The number whose factorial is to be calculated.
 *
 * Return: The factorial of n. Returns -1 if n is less than 0
 * (error), or 1 if n is 0 (base case).
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
