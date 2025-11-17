0-print_name.c

Implements a function that takes a name and a function pointer (f) to print the name according to a specified format.

void print_name(char *name, void (*f)(char *));

1-array_iterator.c

Executes a function (action) given as a parameter on each element of an integer array.

void array_iterator(int *array, size_t size, void (*action)(int));

2-int_index.c

Searches for the index of the first element in an array for which the comparison function (cmp) returns a non-zero value.

int int_index(int *array, int size, int (*cmp)(int));

3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h

Implementation of a simple arithmetic calculator that uses a structure (op_t) and function pointers to select and perform the requested operation (+, -, *, /, %) based on command-line arguments.

Usage: ./calc num1 operator num2
