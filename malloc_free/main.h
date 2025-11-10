#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
/*
 * File: main.h
 * Description: Header file containing prototypes for all functions
 * used in the 0x0C-malloc_free project.
 */

/* Custom _putchar prototype (provided by the checker) */
int _putchar(char c);

/* Task 0: Create and initialize a character array */
char *create_array(unsigned int size, char c);

/* Task 1: Duplicate a string */
char *_strdup(char *str);

/* Task 2: Concatenate two strings */
char *str_concat(char *s1, char *s2);

/* Task 3: Allocate a 2D integer grid */
int **alloc_grid(int width, int height);

/* Task 4: Free a 2D integer grid */
void free_grid(int **grid, int height);

#endif /* MAIN_H */
