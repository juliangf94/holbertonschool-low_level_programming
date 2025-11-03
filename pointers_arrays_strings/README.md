0-reset_to_98.c

void reset_to_98(int *n);

Takes a pointer to an int as parameter and updates the value it points to to 98.

1-swap.c

void swap_int(int *a, int *b);

Swaps the values of two integers using pointers.

2-strlen.c

int _strlen(char *s);

Returns the length of a string. (Custom implementation, no standard library).

3-puts.c

void _puts(char *str);

Prints a string, followed by a new line, to stdout.

4-print_rev.c

void print_rev(char *s);

Prints a string in reverse, followed by a new line.

5-rev_string.c

void rev_string(char *s);

Reverses a string in place.

6-puts2.c

void puts2(char *str);

Prints every other character of a string, starting with the first character, followed by a new line.

7-puts_half.c

void puts_half(char *str);

Prints the second half of a string. If the length is odd, it prints the last $\frac{(length - 1)}{2}$ characters.

8-print_array.c

void print_array(int *a, int n);

Prints n elements of an array of integers, followed by a new line. (Allowed to use printf).

9-strcpy.c

char *_strcpy(char *dest, char *src);

Copies the string pointed to by src, including the terminating null byte, to the buffer pointed to by dest. Returns the pointer to dest.

100-atoi.c

int _atoi(char *s);

Converts a string to an integer. (Custom implementation of the atoi function).




0-strcat.c

Implements char *_strcat(char *dest, char *src).

1-strncat.c

Implements char *_strncat(char *dest, char *src, int n).

2-strncpy.c

Implements char *_strncpy(char *dest, char *src, int n).

3-strcmp.c

Implements int _strcmp(char *s1, char *s2).

4-rev_array.c

Implements void reverse_array(int *a, int n).

5-string_toupper.c

Implements char *string_toupper(char *).

6-cap_string.c

Implements char *cap_string(char *).

7-leet.c

Implements char *leet(char *) with specified constraints.



0-memset.c

char *_memset(char *s, char b, unsigned int n);

Fills the first n bytes of memory area s with the constant byte b.

1-memcpy.c

char *_memcpy(char *dest, char *src, unsigned int n);

Copies n bytes from memory area src to memory area dest.

2-strchr.c

char *_strchr(char *s, char c);

Locates the first occurrence of the character c in the string s.

3-strspn.c

unsigned int _strspn(char *s, char *accept);

Gets the length of the initial segment of s consisting only of bytes from accept.

4-strpbrk.c

char *_strpbrk(char *s, char *accept);

Locates the first occurrence in s of any byte from accept.

5-strstr.c

char *_strstr(char *haystack, char *needle);

Finds the first occurrence of the substring needle in the string haystack.

7-print_chessboard.c

void print_chessboard(char (*a)[8]);

Prints a given 8x8 chessboard.

8-print_diagsums.c

void print_diagsums(int *a, int size);

Prints the sum of the two diagonals of a square matrix.
