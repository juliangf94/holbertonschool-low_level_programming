0x0C. C - Malloc, Free

This project focuses on dynamic memory allocation in the C programming language, specifically utilizing the malloc and free functions. The goal is to understand how to manage memory on the heap and prevent memory leaks.

Requirements

All files are compiled on Ubuntu 20.04 LTS using gcc with the flags: -Wall -Werror -Wextra -pedantic -std=gnu89.

Only the malloc and free standard library functions are allowed.

The _putchar function is allowed for character output.

Tasks Implemented

File

Prototype

Description

0-create_array.c

char *create_array(unsigned int size, char c);

Creates and initializes an array of chars.

1-strdup.c

char *_strdup(char *str);

Returns a pointer to a newly allocated string that duplicates the input string.

2-str_concat.c

char *str_concat(char *s1, char *s2);

Concatenates two strings into a newly allocated buffer.

3-alloc_grid.c

int **alloc_grid(int width, int height);

Creates and initializes a 2D array (grid) of integers to zero.

4-free_grid.c

void free_grid(int **grid, int height);

Frees the memory of a 2D grid created by alloc_grid.
