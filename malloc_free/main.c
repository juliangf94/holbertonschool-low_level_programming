#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;
    unsigned int size = 10;
    char fill_char = 'H';
    unsigned int i;

    printf("--- Testing create_array(%u, '%c') ---\n", size, fill_char);

    /* Call the function */
    s = create_array(size, fill_char);

    if (s == NULL)
    {
        printf("Failed to allocate memory.\n");
        return (1);
    }

    /* Print the content of the created array */
    for (i = 0; i < size; i++)
    {
        printf("[%u]: %c\n", i, s[i]);
    }
    printf("\n");

    /* Free the allocated memory (Crucial step!) */
    free(s);

    /* Test case for size = 0 */
    printf("--- Testing create_array(0, 'Z') ---\n");
    s = create_array(0, 'Z');
    if (s == NULL)
    {
        printf("Test 2 successful: Returned NULL for size 0.\n");
    }
    else
    {
        printf("Test 2 FAILED: Did not return NULL for size 0.\n");
        free(s); /* Clean up if it failed unexpectedly */
    }

    return (0);
}
