#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the program, followed by a new line.
 * @argc: The number of arguments passed to the program (unused).
 * @argv: An array of strings containing the arguments.
 * argv[0] is the program name.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
