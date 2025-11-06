#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculates the minimum number of coins for change.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * This program implements a greedy algorithm to find the minimum number
 * of coins (25, 10, 5, 2, 1) required to make change for a given amount.
 * It also handles error cases for argument count and negative amounts.
 *
 * Return: 0 on success, 1 on error (incorrect number of arguments).
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;
	int i;
	int coin_values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (cents >= coin_values[i])
		{
			int count = cents / coin_values[i];

			coins += count;
			cents %= coin_values[i];
		}

		if (cents == 0)
		{
			break;
		}
	}

	printf("%d\n", coins);

	return (0);
}
