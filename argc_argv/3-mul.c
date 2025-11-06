#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as command-line arguments.
 * @argc: The total number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Description: Checks if exactly two numbers were provided (argc == 3).
 * If not, prints "Error" and returns 1.
 * Otherwise, converts argv[1] and argv[2] to integers, multiplies them,
 * and prints the result.
 *
 * Return: 0 on success, 1 on error (incorrect number of arguments).
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
