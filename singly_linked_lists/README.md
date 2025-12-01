C Singly Linked Lists

This project implements core operations for a singly linked list data structure in C. The functions adhere to strict constraints, including limiting standard library usage (malloc, free, and exit only) and following the Betty coding style.

Data Structure

The project uses the following node structure:

/**
 * struct list_s - singly linked list node structure
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;


Mandatory Functions

File

Prototype

Description

0-print_list.c

size_t print_list(const list_t *h);

Prints all elements of the list.

1-list_len.c

size_t list_len(const list_t *h);

Returns the number of nodes in the list.

2-add_node.c

list_t *add_node(list_t **head, const char *str);

Adds a new node at the beginning of the list.

3-add_node_end.c

list_t *add_node_end(list_t **head, const char *str);

Adds a new node at the end of the list.

4-free_list.c

void free_list(list_t *head);

Frees all memory allocated for the list.
