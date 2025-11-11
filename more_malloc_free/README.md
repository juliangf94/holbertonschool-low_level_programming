0-malloc_checked.c

void *malloc_checked(unsigned int b);

Allocates memory using malloc and checks the result. If malloc fails, the process exits with status 98.

1-string_nconcat.c

char *string_nconcat(char *s1, char *s2, unsigned int n);

Concatenates two strings into a newly allocated space. It uses the entire s1 but only the first n bytes of s2.

2-calloc.c

void *_calloc(unsigned int nmemb, unsigned int size);

Custom implementation of calloc. Allocates memory for an array of nmemb elements of size bytes each and initializes the memory to zero.

3-array_range.c

int *array_range(int min, int max);

Creates an array of integers containing all values from min to max (inclusive), ordered from min to max. Returns NULL if min > max or allocation fails.
