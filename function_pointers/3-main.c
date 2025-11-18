#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Performs simple arithmetic operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments (a, operator, b).
 *
 * This program expects exactly four arguments: ./calc a operator b
 *
 * Return: 0 on success, 98 if the number of arguments is wrong,
 * 99 if the operator is invalid, and 100 for division by zero/modulo by zero.
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *op;
	int (*f)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	f = get_op_func(op);

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = f(a, b);
	printf("%d\n", result);
	return (0);
}
