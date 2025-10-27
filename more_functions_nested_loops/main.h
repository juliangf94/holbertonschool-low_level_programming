#ifndef MAIN_H
#define MAIN_H

/* Bibliotecas y utilidades */
int _putchar(char c);

/* 0. Checks for uppercase character */
int _isupper(int c);

/* 1. Checks for a digit */
int _isdigit(int c);

/* 2. Multiplies two integers */
int mul(int a, int b);

/* 3. Prints the numbers 0 to 9 */
void print_numbers(void);

/* 4. Prints most numbers (0-9, skipping 2 and 4) */
void print_most_numbers(void);

/* 5. Prints the numbers 0-14, 10 times */
void more_numbers(void);

/* 6. Draws a straight line */
void print_line(int n);

/* 7. Draws a diagonal line */
void print_diagonal(int n);

/* 8. Prints a square */
void print_square(int size);

/* 9. Fizz-Buzz program - No function prototype needed as it's a standalone main */

/* 10. Prints a triangle */
void print_triangle(int size);

#endif /* MAIN_H */

