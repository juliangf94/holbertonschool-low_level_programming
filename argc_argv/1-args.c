#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program.
 * @argc: The total number of command-line arguments
 * (including the program name).
 * @argv: An array of strings containing the arguments (unused in this task).
 *
 * Description: The argument count (argc) always starts
 * at 1 (for the program name).
 * We subtract 1 to get the number of user-supplied arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
