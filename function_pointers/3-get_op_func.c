#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Selects the correct function to perform the operation.
 * @s: The operator passed as argument (+, -, *, /, %).
 *
 * This function uses a single while loop and a single if statement
 * to find the matching function pointer, adhering to all constraints.
 *
 * Return: A pointer to the function corresponding to the operator, or NULL.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
