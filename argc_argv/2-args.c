#include "main.h"
#include <stdio.h>

/**
 * main - Prints all command-line arguments received, one per line.
 * @argc: The number of arguments
 * (unused, but included for the main signature).
 * @argv: An array of strings containing the arguments.
 *
 * Description: The function iterates through the argv array,
 * starting at index 0,
 * and prints each string followed by a newline character.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	(void)argc;
	return (0);
}
