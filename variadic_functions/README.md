0-sum_them_all.c

int sum_them_all(const unsigned int n, ...);

Returns the sum of all its parameters. Returns 0 if n == 0.

1-print_numbers.c

void print_numbers(const char *separator, const unsigned int n, ...);

Prints numbers, followed by a new line. Uses separator between numbers (if not NULL).

2-print_strings.c

void print_strings(const char *separator, const unsigned int n, ...);

Prints strings, followed by a new line. Prints (nil) if a string is NULL.

3-print_all.c

void print_all(const char * const format, ...);

Prints data of different types (c, i, f, s) based on the format string. Handles strict constraint rules.
