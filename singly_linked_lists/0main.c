#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL}; // str: "World", len: 5, next: NULL
    size_t n;

    head = &hello; // head points to hello memory address.
    // List: hello ("World") -> NULL
    new = malloc(sizeof(list_t)); // Asign memory to the "new" mode
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello"); // Copy the "Hello" string in the "str" of the "new" node
    new->len = 5; // Asign "5" to "len" of "new" node
    new->next = head; // Asign "head" to the "next" field of the "new" node
    head = new; //Actualize "head" so that it points to the "new" node
    // List: new ("Hello") -> hello ("World") -> NULL

    n = print_list(head); // Call of the print_list function with the 2 nodes of "head". 
    printf("-> %lu elements\n", n);
    //Output: [5] Hello [5]  --> 2 elements

    printf("\n");
    free(new->str); //Free the "str" that strdup asign for the "Hello" string
    new->str = NULL; // Stablish NULL as the new string
    n = print_list(head); //Call of the print_list function with the NULL string
    printf("-> %lu elements\n", n); 
    // Output: [0] (nil) [5] World --> 2 elements
    free(new); // Release the memory assigned for "new"
    // The node "hello" does not need to be free
    return (0); 
}
