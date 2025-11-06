#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds all positive numbers passed as command-line arguments.
 * @argc: The total number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Description: Checks each argument to ensure it contains only digits.
 * If validation fails for any argument, prints "Error" and returns 1.
 * If no arguments are provided (argc == 1), prints 0.
 * Otherwise, prints the total sum of all provided numbers.
 *
 * Return: 0 on success, 1 on error (non-digit character found).
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("d%\n", sum);

	return (0);

}
